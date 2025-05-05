@interface BDUGLuckyCatSetStorageItemXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString data;
@property (nonatomic) NSNumber expireTime;
- (id)data;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setData:;
- (id)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
