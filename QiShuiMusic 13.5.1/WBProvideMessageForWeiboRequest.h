@interface WBProvideMessageForWeiboRequest : WBBaseRequest
- (BOOL)canBeReceived;
- (BOOL)canBeSent;
+ (Class)associateResponseClass;
@end
