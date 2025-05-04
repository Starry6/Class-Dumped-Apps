@interface AWENetworkCommonPushManager : NSObject
@property (nonatomic) NSMutableDictionary data_map;
@property (nonatomic) NSMutableArray booked_topic;
@property (nonatomic) BOOL isByteSyncStarted;
@property (nonatomic) AWENetworkCommonPushConfig currentConfig;
- (void)setupWithConfig:;
- (void)handleByteSyncDataCallBack:businessID:;
- (void)addLogWithType:model:error:;
- (id)data_map;
- (void)startCommonPush;
- (void)endCommonPush;
- (BOOL)registerLister:;
- (BOOL)unRegisterLister:;
- (void)setData_map:;
- (id)booked_topic;
- (void)setBooked_topic:;
- (BOOL)isByteSyncStarted;
- (void)setIsByteSyncStarted:;
- (id)init;
- (void)setCurrentConfig:;
- (void).cxx_destruct;
- (id)currentConfig;
+ (id)sharedInstance;
@end
