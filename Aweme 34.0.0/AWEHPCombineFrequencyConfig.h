@interface AWEHPCombineFrequencyConfig : MTLModel
@property (nonatomic) NSArray triggerList;
@property (nonatomic) NSArray interfaceList;
@property (nonatomic) q fetchInterval;
@property (nonatomic) AWEHPCombineFrequencyPeriodLimitModel periodLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)triggerList;
- (void)setTriggerList:;
- (id)periodLimit;
- (id)interfaceList;
- (void)setInterfaceList:;
- (void)setPeriodLimit:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (long long)fetchInterval;
- (void)setFetchInterval:;
+ (id)JSONKeyPathsByPropertyKey;
@end
