@interface AWEIMMessageContentLocationComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)p_createPresenterIfNeeded;
- (void)p_addKVO:;
- (void)didFinishSetImage:ofMessage:;
+ (BOOL)canCreateComponentWithContext:;
@end
