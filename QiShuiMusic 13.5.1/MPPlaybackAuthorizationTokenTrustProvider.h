@interface MPPlaybackAuthorizationTokenTrustProvider : NSObject
@property (nonatomic) q requestSource;
@property (nonatomic) NSString trustID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (long long)requestSource;
- (void)encodeWithCoder:;
- (void)setRequestSource:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)trustID;
- (id)initWithRequestSource:;
- (void)setTrustID:;
+ (BOOL)supportsSecureCoding;
@end
