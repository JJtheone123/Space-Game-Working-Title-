// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WORK_DAMN_YOUTarget : TargetRules
{
	public WORK_DAMN_YOUTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "WORK_DAMN_YOU" } );
	}
}
