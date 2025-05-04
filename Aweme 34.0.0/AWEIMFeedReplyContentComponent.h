@interface AWEIMFeedReplyContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)contentAttributedStringWithMessage:;
- (void)handleJumpUserProfileActionIfNeeded:tappedRange:;
- (id)contentAttributedStringWithMessageString:str:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
