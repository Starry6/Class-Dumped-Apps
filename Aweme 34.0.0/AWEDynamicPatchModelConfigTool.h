@interface AWEDynamicPatchModelConfigTool : NSObject
+ (void)AWEDynamicPatchModelSetUsePrelayoutFirst:usePrelayoutFirst:;
+ (void)AWEDynamicPatchModelSetEnableSwitchSyncMode:enableSwitchSyncMode:;
+ (BOOL)AWEDynamicPatchModelGetUsePrelayoutFirst:;
+ (BOOL)AWEDynamicPatchModelGetEnableSwitchSyncMode:;
@end
