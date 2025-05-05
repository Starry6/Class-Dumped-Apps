@interface BDCommonClientABTestExperiment : BDCommonABTestBaseExperiment
@property (nonatomic) BDCommonClientABTestLayer clientLayer;
- (id)clientLayer;
- (id)freshValue;
- (id)initWithKey:owner:description:defaultValue:valueType:isSticky:clientLayer:;
- (void).cxx_destruct;
@end
