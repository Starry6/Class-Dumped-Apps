@interface IESECLiveCartControlConfigModel : MTLModel
@property (nonatomic) NSString limitKey;
@property (nonatomic) q singleRoomShowTimes;
@property (nonatomic) q totalShowTimes;
@property (nonatomic) q period;
@property (nonatomic) BOOL isNaturalTime;
@property (nonatomic) NSArray cancelActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cancelActions;
- (BOOL)isNaturalTime;
- (id)limitKey;
- (void)setCancelActions:;
- (void)setIsNaturalTime:;
- (void)setLimitKey:;
- (void)setSingleRoomShowTimes:;
- (void)setTotalShowTimes:;
- (long long)singleRoomShowTimes;
- (long long)totalShowTimes;
- (void).cxx_destruct;
- (long long)period;
- (void)setPeriod:;
+ (id)cancelActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
