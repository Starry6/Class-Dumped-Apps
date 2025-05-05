@interface TIAggdReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
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
+ (void)setSharedAggdReporter:;
+ (id)singletonInstance;
+ (id)getDefaultSoftwareLayout;
+ (id)sharedAggdReporter;
@end
