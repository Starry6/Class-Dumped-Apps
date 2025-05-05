@interface SKProductSubscriptionPeriod : NSObject
@property (nonatomic) Q numberOfUnits;
@property (nonatomic) Q unit;
- (id)initWithXPCEncoding:;
- (id)init;
- (id)copyXPCEncoding;
- (unsigned long long)numberOfUnits;
- (id)initWithISO8601String:;
- (void).cxx_destruct;
- (void)_setUnit:;
- (unsigned long long)unit;
- (void)_setNumberOfUnits:;
@end
