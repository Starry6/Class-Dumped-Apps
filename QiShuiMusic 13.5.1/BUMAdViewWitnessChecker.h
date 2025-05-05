@interface BUMAdViewWitnessChecker : BUInterfaceBaseObject
@property (nonatomic) BUMAdViewWitnessChecker iteration;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
+ (double)getWitnessTimeForAd:;
+ (void)setWitnessTimeForAd:;
+ (id)sharedInstance;
@end
