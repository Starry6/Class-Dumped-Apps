@interface AWEKVStorageConfiguration : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString deviceId;
- (id)deviceId;
- (id)init;
- (id)userId;
- (void)setDeviceId:;
- (void).cxx_destruct;
- (void)setUserId:;
+ (BOOL)validString:;
+ (BOOL)validNumber:;
@end
