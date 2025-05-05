@interface IESIMMusicMVTemplateRspBase : MTLModel
@property (nonatomic) q timeElapsed;
@property (nonatomic) q receivedAt;
@property (nonatomic) q sentAt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTimeElapsed:;
- (long long)receivedAt;
- (long long)timeElapsed;
- (void)setReceivedAt:;
- (long long)sentAt;
- (void)setSentAt:;
+ (id)JSONKeyPathsByPropertyKey;
@end
