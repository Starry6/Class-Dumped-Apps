@interface AWEABTestModuleServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)incrementalUpdateData:unchangedKeyList:;
- (void)removeABTestDataWithKeys:;
- (void)setShouldPrintLog:;
- (BOOL)lastUpdateByIncrement;
- (void)setABTestNetworkImpl:;
- (void)fetchABTestDataWithCompletion:;
- (void)updateAllABTestData:;
- (void)updatePartialABTestData:shouldCleanStable:;
- (BOOL)hasFetchedData;
- (id)getFullABTestData;
- (id)dataVersion;
+ (id)sharedInstance;
@end
