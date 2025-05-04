@interface AWEAdTaskExecuteService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackLeftSlideClick:;
+ (BOOL)executeLeftSlideClickTrackWithAwemeModel:fromWebView:webViewDidLoadFinish:;
+ (void)cancelLeftSlideClickExecution;
+ (void)presentAdTaskLitePanelViewControllerWithModel:;
@end
