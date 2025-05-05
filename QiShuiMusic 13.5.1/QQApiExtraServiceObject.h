@interface QQApiExtraServiceObject : QQApiObject
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString openID;
@property (nonatomic) NSString toUin;
@property (nonatomic) NSDictionary extraInfo;
- (id)initWithOpenID:serviceID:;
- (id)openID;
- (void)setExtraInfo:;
- (void)setOpenID:;
- (void)setToUin:;
- (id)toUin;
- (id)serviceID;
- (void)setServiceID:;
- (id)extraInfo;
+ (id)objecWithOpenID:serviceID:;
@end
