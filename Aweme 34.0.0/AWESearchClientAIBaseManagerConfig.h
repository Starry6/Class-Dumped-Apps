@interface AWESearchClientAIBaseManagerConfig : NSObject
@property (nonatomic) AWESearchCommonChainMonitor managerMonitor;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSString businessName;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) q gapTime;
- (long long)gapTime;
- (void)setGapTime:;
- (id)managerMonitor;
- (void)setManagerMonitor:;
- (void)setScene:;
- (id)init;
- (id)scene;
- (id)channel;
- (void)setChannel:;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (id)businessName;
- (void)setBusinessName:;
- (id)extraData;
- (void)setExtraData:;
- (id)searchID;
- (void)setSearchID:;
@end
