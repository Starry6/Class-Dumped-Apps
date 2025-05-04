@interface AWEOuterTestAdapterIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didThemeChanged;
- (void)outerTestTrackEvent:params:;
- (void)outerTestLogString:;
- (void)outerTestShowToast:duration:;
- (void)outerTestLoadImageForView:withImageURLs:placeholderImage:;
- (void)outerTestCancelLoadImageForView:;
- (BOOL)outerTestOpenSchema:;
- (void)outerTestOpenFeedback;
- (void)outerTestPopupInviteWithViewModel:completionHandler:;
- (void)outerTestPopupTFExpireWithViewModel:completionHandler:;
- (void)outerTestPopupFirstInstallGuideWithViewModel:completionHandler:;
- (id)init;
- (void)dealloc;
@end
