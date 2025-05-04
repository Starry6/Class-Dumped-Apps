@interface AWESharePanelViewModelBuilder : NSObject
+ (id)buildSharePanelViewModelWithTask:shareView:;
+ (id)buildModalSharePanelViewModelWithTask:shareView:;
+ (id)shareItemsWithTask:withShareItemType:;
+ (id)buildSharePanelViewModelWithTask:shareView:customDownload:;
+ (id)makeItemWithStyle:channel:task:shareView:;
+ (void)updateDownloadItemPosition:context:;
+ (BOOL)shouldDisableItemWithChannel:Task:;
@end
