/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

namespace AZ
{
    namespace Platform
    {
        using ProcessId = unsigned int;
        using MachineId = unsigned int;

        extern MachineId s_machineId;

        /// Returns the current process id (pid)
        ProcessId GetCurrentProcessId();

        /// Returns a unique machine id that should be unique per platform (PC, Mac, console, etc)
        MachineId GetLocalMachineId();

        /// Sets the machine id. Id should be unique per platform (PC, Mac, console, etc)
        void SetLocalMachineId(MachineId machineId);
    }
}
