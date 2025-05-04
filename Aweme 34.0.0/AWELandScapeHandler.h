@interface AWELandScapeHandler : NSObject
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
+ (BOOL)useNewTransition;
+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)canShowLandScapeEntryWithModel:;
+ (id)calcuteVideoRealFrame:model:referString:;
+ (BOOL)shouldAvoidOverlapWithPlayer:model:;
+ (double)calcuteLandscapeEntryViewTopOffset:model:referString:;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (void)enterLandSacpeVideoControllerWithPlayer:contextConfigInfo:landScapeDelegate:transitioningDelegate:configBeforeEnterBlock:configAfterEnterBlock:;
+ (id)configLandScapeContextWithInfo:;
@end
