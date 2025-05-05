@interface SYContentItemPreviewManager : NSObject
+ (void)loadPreviewDataForItems:fullDetail:didFinishLoadingPreviewHandler:;
+ (void)_loadPreviewMetadataForItem:fullDetail:completion:;
+ (void)_loadPreviewUsingLPForItem:fullDetail:completion:;
+ (void)_loadPreviewForAppContentItem:completion:;
@end
