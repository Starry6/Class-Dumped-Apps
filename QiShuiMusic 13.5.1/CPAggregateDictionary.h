@interface CPAggregateDictionary : NSObject
@property (nonatomic) BOOL enabled;
- (int)commit;
- (void)incrementKey:;
- (void)decrementKey:;
- (void)subtractValue:forKey:;
- (void)pushValue:forKey:;
- (void)setValue:forDistributionKey:;
- (void)clearScalarKey:;
- (void)addValue:forKey:;
- (void)significantTimeChanged;
- (void)clearDistributionKey:;
- (void)setValue:forScalarKey:;
- (BOOL)isEnabled;
+ (id)sharedAggregateDictionary;
@end
