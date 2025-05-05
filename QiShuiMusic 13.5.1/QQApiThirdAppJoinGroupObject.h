@interface QQApiThirdAppJoinGroupObject : QQApiObject
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString payToken;
@property (nonatomic) NSString pfkey;
@property (nonatomic) NSString unionID;
- (id)unionID;
- (id)initWithAccessToken:payToken:pfkey:unionID:;
- (id)payToken;
- (id)pfkey;
- (void)setPayToken:;
- (void)setPfkey:;
- (void)setUnionID:;
- (id)accessToken;
- (void)setAccessToken:;
+ (id)objectWithAccessToken:payToken:pfkey:unionID:;
@end
