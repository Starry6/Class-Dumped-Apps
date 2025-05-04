@interface AWEIMTextLinkMessageComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenterIfNeed;
- (void)p_setupMessage;
- (id)p_attributedStringForMsg:;
- (void)p_handleJumpUserProfileActionIfNeeded:tappedRange:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
