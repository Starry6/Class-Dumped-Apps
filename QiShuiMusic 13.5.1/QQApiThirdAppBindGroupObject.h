@interface QQApiThirdAppBindGroupObject : QQApiObject
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString payToken;
@property (nonatomic) NSString pfkey;
@property (nonatomic) NSString unionID;
@property (nonatomic) NSString appDisplayName;
- (id)unionID;
- (id)initWithAccessToken:payToken:pfkey:unionID:appDisplayName:;
- (id)payToken;
- (id)pfkey;
- (void)setPayToken:;
- (void)setPfkey:;
- (void)setUnionID:;
- (id)accessToken;
- (void)setAccessToken:;
- (id)appDisplayName;
- (void)setAppDisplayName:;
+ (id)objectWithAccessToken:payToken:pfkey:unionID:appDisplayName:;
@end
