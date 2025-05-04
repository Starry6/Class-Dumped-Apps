@interface AWESearchCustomeEditorManager : NSObject
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:dataContext:;
- (void)launchEditWithConfig:;
- (id)businessIdentifier;
+ (id)createItemVideoWithPath:;
@end
