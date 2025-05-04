@interface AWEIMChatBackgroundComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)noticeBlankDidLongPressed:;
- (void)messageBlankDidLongPressed:;
- (void)processChangeBackgroundResponse:;
- (void)p_blankDidLongPressed;
- (id)p_noticeMessageSourcePath:;
+ (BOOL)canCreateComponentWithContext:;
@end
