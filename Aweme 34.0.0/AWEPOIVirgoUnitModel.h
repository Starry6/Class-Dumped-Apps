@interface AWEPOIVirgoUnitModel : NSObject
@property (nonatomic) NSString unitKey;
@property (nonatomic) q schedule;
@property (nonatomic) q delay;
@property (nonatomic) NSDictionary params;
- (void)setUnitKey:;
- (id)unitKey;
- (long long)schedule;
- (void)setDelay:;
- (long long)delay;
- (void).cxx_destruct;
- (id)params;
- (void)setSchedule:;
- (void)setParams:;
+ (id)modelWithData:;
@end
