@interface BDXBridgeCanIUseMethodResultModel : BDXBridgeModel
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) NSArray params;
@property (nonatomic) NSArray results;
- (BOOL)isAvailable;
- (id)results;
- (void).cxx_destruct;
- (void)setIsAvailable:;
- (id)params;
- (void)setResults:;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
