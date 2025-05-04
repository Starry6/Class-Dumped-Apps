@interface AWEFeedSmartLoadmoreMLModule : NSObject
@property (nonatomic) AWEFeedSmartLoadmoreStrategyModel strategyModel;
@property (nonatomic) q loadmoreMLLimitCount;
@property (nonatomic) BOOL loadmoreDelayMsEnabled;
@property (nonatomic) NSArray modelExecuteConditions;
@property (nonatomic) NSNumber lpPredict;
@property (nonatomic) NSString lpPredictLabel;
- (id)initWithDic:;
- (id)lpPredict;
- (id)lpPredictLabel;
- (void)setLpPredict:;
- (void)setLpPredictLabel:;
- (void)setLoadmoreMLLimitCount:;
- (void)setLoadmoreDelayMsEnabled:;
- (void)setModelExecuteConditions:;
- (void)setStrategyModel:;
- (id)strategyModel;
- (BOOL)loadmoreDelayMsEnabled;
- (id)modelExecuteConditions;
- (long long)loadmoreMLLimitCount;
- (void)predictResultWithCondition:inputData:block:;
- (void)execLoadMoreBlockIfNeeded:withPredictLabel:;
- (void)predictResultWithInputData:condition:andExecuteBlock:;
- (BOOL)getConditionFilterResultWithFilter:compareBlock:;
- (void).cxx_destruct;
@end
