@interface TSPKRuleEngineFrequencyManager : NSObject
@property (nonatomic) NSMutableDictionary storeDict;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (void)clearUnavailableData:name:currentTime:;
- (id)hanleEvent:;
- (BOOL)isVaildWithName:;
- (void)setStoreDict:;
- (id)storeDict;
- (id)init;
- (id)uniqueId;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedManager;
@end
