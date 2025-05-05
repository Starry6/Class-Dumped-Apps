@interface IESLivePEDecisionCalculator : NSObject
@property (nonatomic) IESLiveThreadSafeDictionary functionDic;
- (void)setFunctionDic:;
- (void)addOperator:forNodeType:function:;
- (id)functionDic;
- (id)functionWithNodeType:andOperator:;
- (void)setupFunctionMap;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
