@interface IESIMALMOwnPlayerApiParser : NSObject
+ (id)MD5HashString:;
+ (id)urlWithVideoId:;
+ (id)domainResponseConfigBlock;
+ (void)setApiPrefix:;
+ (void)setCommonParamBlock:;
+ (void)setDomainConfigBlock:;
+ (void)setDomainResponseConfigBlock:;
+ (void)setUserKey:secretKey:;
+ (id)signFromVideoID:ts:;
@end
