@interface PrivacyProxyTokenInfo : NSObject
@property (nonatomic) Q cachedTokens;
@property (nonatomic) Q agentTokens;
@property (nonatomic) Q agentLowWaterMark;
@property (nonatomic) Q cacheLowWaterMark;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)cachedTokens;
- (void)setCachedTokens:;
- (unsigned long long)agentTokens;
- (void)setAgentTokens:;
- (unsigned long long)agentLowWaterMark;
- (void)setAgentLowWaterMark:;
- (unsigned long long)cacheLowWaterMark;
- (void)setCacheLowWaterMark:;
+ (BOOL)supportsSecureCoding;
@end
