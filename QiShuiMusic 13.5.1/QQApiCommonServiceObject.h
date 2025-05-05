@interface QQApiCommonServiceObject : QQApiObject
@property (nonatomic) NSString openID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSDictionary extendInfo;
- (id)extendInfo;
- (id)initWithOpenID:serviceID:extendInfo:;
- (id)openID;
- (void)setExtendInfo:;
- (void)setOpenID:;
- (id)serviceID;
- (void)setServiceID:;
+ (id)objecWithOpenID:serviceID:extendInfo:;
@end
