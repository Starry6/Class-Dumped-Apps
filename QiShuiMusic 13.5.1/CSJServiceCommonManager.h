@interface CSJServiceCommonManager : NSObject
@property (nonatomic) <BUADServiceImageProtocol> imageImp;
@property (nonatomic) <BUADServiceNetProtocol> netImp;
@property (nonatomic) <BUADServiceUnzipProtocol> unzipImp;
@property (nonatomic) <BUStorageProtocol> storageImp;
@property (nonatomic) <BUADServiceLogProtocol> logImp;
- (id)imageImp;
- (id)logImp;
- (id)netImp;
- (void)setImageImp:;
- (void)setLogImp:;
- (void)setNetImp:;
- (void)setStorageImp:;
- (void)setUnzipImp:;
- (id)storageImp;
- (id)unzipImp;
- (void).cxx_destruct;
+ (id)getDBStorageProtocolImpWithName:option:;
+ (id)getImageProtocolImp;
+ (id)getKVStorageProtocolImpWithName:option:;
+ (id)getLocalLogProtocolImp;
+ (id)getNetProtocolImp;
+ (id)getStorageProtocollImp;
+ (id)getUnzipProtocolImp;
+ (id)manager;
+ (void)exceptionWithName:reason:userInfo:;
@end
