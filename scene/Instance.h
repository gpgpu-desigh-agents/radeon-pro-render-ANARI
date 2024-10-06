/**********************************************************************
Copyright 2022 Advanced Micro Devices, Inc
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
********************************************************************/

#pragma once

#include "../rpr_common.h"
#include "Group.h"
#include "SceneObject.h"

namespace anari {
namespace rpr {

struct Group;

struct Instance : public SceneObject
{
 public:
  Instance();
  void commit() override;
  void attachToScene(rpr_scene scene);

 private:
  IntrusivePtr<Group> m_group;
  mat4                m_transform{};
};
} // namespace rpr

ANARI_TYPEFOR_SPECIALIZATION(rpr::Instance *, ANARI_INSTANCE);

} // namespace anari
