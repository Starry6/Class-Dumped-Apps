@interface BDXBridgeGetGeckoInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) NSNumber totalSize;
@property (nonatomic) NSString version;
- (BOOL)needUpdate;
- (void)setNeedUpdate:;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)totalSize;
- (void)setTotalSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
