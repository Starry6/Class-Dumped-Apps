@interface AWEApplogDynamicFreqManager : NSObject
@property (nonatomic) NSMutableArray strategyList;
@property (nonatomic) AWEExperiencePriorityStack validStrategyPriorityStack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyList;
- (void)setStrategyList:;
- (void)onManagerInit;
- (id)buildApplogDefaultFreqStrategy;
- (void)logObjectsInPriorityStack;
- (id)validStrategyPriorityStack;
- (void)updateApplogUploadFrequency;
- (void)trackStrategyChangedWithStrategy:didChangeState:;
- (void)strategy:didChangeState:fromState:;
- (void)setValidStrategyPriorityStack:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
