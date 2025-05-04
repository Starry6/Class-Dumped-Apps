@interface AWEIMMixImageAnchorComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)didFinishSetImage:ofMessage:;
- (void)p_anchorViewDidTapped;
- (void)p_updatePropsWithMessage;
- (void)p_showMediaDetail;
+ (BOOL)canCreateComponentWithContext:;
@end
