@interface CTCarrierSpaceAuthInfo : NSObject
@property (nonatomic) NSData accessToken;
@property (nonatomic) NSData refreshToken;
@property (nonatomic) NSDate expiresAt;
@property (nonatomic) BOOL shouldCache;
- (id)init;
- (BOOL)shouldCache;
- (id)initWithCoder:;
- (id)expiresAt;
- (id)accessToken;
- (void)encodeWithCoder:;
- (void)setShouldCache:;
- (void).cxx_destruct;
- (id)refreshToken;
- (id)description;
- (void)setExpiresAt:;
- (void)setAccessToken:;
- (void)setRefreshToken:;
+ (BOOL)supportsSecureCoding;
@end
