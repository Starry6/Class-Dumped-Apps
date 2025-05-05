@interface TIStatisticKey : NSObject
@property (nonatomic) NSString counterName;
@property (nonatomic) NSString aggdName;
@property (nonatomic) NSString inputMode;
- (id)inputMode;
- (id)counterName;
- (id)aggdName;
- (id)initWithAggdName:andCounterName:andInputMode:;
- (void).cxx_destruct;
+ (id)statisticKeyWithAggdName:andCounterName:andInputMode:;
@end
