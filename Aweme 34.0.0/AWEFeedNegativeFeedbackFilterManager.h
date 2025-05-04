@interface AWEFeedNegativeFeedbackFilterManager : NSObject
@property (nonatomic) NSMutableDictionary negativeInfoDict;
- (void)buildNegativeInfoDict;
- (void)loadNegativeFeedbackInfoDictFromCache;
- (id)negativeInfoDict;
- (void)setNegativeInfoDict:;
- (id)negativeFeedbackInfoList;
- (id)negativeFeedbackActionList;
- (void)removeInvalidExpirationNegativeInfoWithTime:;
- (void)storageNegativeFeedbackInfoDict;
- (id)createNegativeFeedbackInfoModelWithActionType:negativeInfoType:value:;
- (void)logAllNegativeModelInfo;
- (void)addNegativeFeedbackInfoWithActionType:negativeInfoType:value:;
- (void)removeNegativeFeedbackInfoWithActionType:negativeInfoType:value:;
- (id)init;
- (void)dealloc;
- (void)addObserver;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
- (void)applicationWillTerminate:;
@end
