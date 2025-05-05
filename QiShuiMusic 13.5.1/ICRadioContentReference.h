@interface ICRadioContentReference : NSObject
@property (nonatomic) q contentType;
@property (nonatomic) NSString playbackAuthorizationToken;
- (long long)contentType;
- (id)playbackAuthorizationToken;
- (void)setPlaybackAuthorizationToken:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)rawContentDictionaryWithSubscriptionStatus:;
- (id)matchDictionaryWithSubscriptionStatus:;
+ (BOOL)supportsSecureCoding;
+ (id)storeItemWithIdentifier:;
@end
