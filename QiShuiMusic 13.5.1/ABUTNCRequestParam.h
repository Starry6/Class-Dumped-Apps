@interface ABUTNCRequestParam : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSString deviceDid;
@property (nonatomic) NSString ssAppID;
- (id)ssAppID;
- (id)deviceDid;
- (void)setDeviceDid:;
- (void)setSsAppID:;
- (id)toDictionary;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
@end
