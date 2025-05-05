@interface QQApiThirdAppUnBindGroupObject : QQApiObject
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString payToken;
@property (nonatomic) NSString pfkey;
@property (nonatomic) NSString unionID;
- (id)unionID;
- (id)initWithAccessToken:payToken:pfkey:unionID:openId:appId:;
- (id)openId;
- (id)payToken;
- (id)pfkey;
- (void)setOpenId:;
- (void)setPayToken:;
- (void)setPfkey:;
- (void)setUnionID:;
- (id)accessToken;
- (void)setAccessToken:;
+ (id)objectWithAccessToken:payToken:pfkey:unionID:openId:appId:;
@end
