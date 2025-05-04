@interface AWEIMEmotionCareBotAgreementManager : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
+ (BOOL)canCreateComponentWithContext:;
@end
