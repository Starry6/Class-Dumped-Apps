@interface BDUGBaseRequestParam : NSObject
@property (nonatomic) NSString aId;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString installId;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString host;
- (id)aId;
- (void)setAId:;
- (id)installId;
- (void)setInstallId:;
- (id)deviceId;
- (void)setDeviceId:;
- (id)host;
- (void)setHost:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
+ (id)requestParam;
@end
