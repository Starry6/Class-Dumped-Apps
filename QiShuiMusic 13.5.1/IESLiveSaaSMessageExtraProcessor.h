@interface IESLiveSaaSMessageExtraProcessor : IESLiveMessageProcesser
@property (nonatomic) NSDictionary realMessagesCondition;
@property (nonatomic) NSDictionary delayMessagesCondition;
@property (nonatomic) NSDictionary discardableMessagesCondition;
@property (nonatomic) BOOL isAnchor;
- (id)delayMessagesCondition;
- (id)discardableMessagesCondition;
- (BOOL)p_isDelayMessage:;
- (BOOL)p_isDiscardableMessage:;
- (BOOL)p_isRealMessage:;
- (id)realMessagesCondition;
- (void)setDelayMessagesCondition:;
- (void)setDiscardableMessagesCondition:;
- (void)setIsAnchor:;
- (void)setRealMessagesCondition:;
- (id)init;
- (BOOL)process:;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
