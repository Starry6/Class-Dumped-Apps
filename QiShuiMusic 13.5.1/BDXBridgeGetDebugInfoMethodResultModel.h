@interface BDXBridgeGetDebugInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber useBOE;
@property (nonatomic) NSString boeChannel;
@property (nonatomic) NSNumber usePPE;
@property (nonatomic) NSString ppeChannel;
- (id)boeChannel;
- (id)ppeChannel;
- (void)setBoeChannel:;
- (void)setPpeChannel:;
- (void)setUseBOE:;
- (void)setUsePPE:;
- (id)useBOE;
- (id)usePPE;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
