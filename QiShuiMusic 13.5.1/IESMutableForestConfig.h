@interface IESMutableForestConfig : IESForestConfig
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSDictionary defaultPrefixToAccessKey;
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) NSNumber cdnTimeoutInterval;
@property (nonatomic) NSNumber disableGecko;
@property (nonatomic) NSNumber disableBuiltin;
@property (nonatomic) NSNumber disableCDN;
@property (nonatomic) NSNumber waitGeckoUpdate;
@property (nonatomic) NSNumber enableMemoryCache;
@property (nonatomic) NSArray fetcherSequence;
@property (nonatomic) NSNumber runWorkflowInGlobalQueue;
@property (nonatomic) IESForestSwitches switches;
- (void)addEntriesFromConfig:;
- (id)copyWithZone:;
@end
