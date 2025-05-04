@interface AWEPluginLoadingViewImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdp_getLoadingViewWithConfig:;
- (id)bdp_getLoadingView;
- (id)bdp_getWindowLoadingViewWithModel:;
- (id)bdp_getToastViewWithModel:;
- (id)bdp_showPanelOnController:contentController:model:;
- (id)bdp_getLoadingSearchRemindView;
+ (id)sharedPlugin;
@end
