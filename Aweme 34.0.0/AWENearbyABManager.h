@interface AWENearbyABManager : NSObject
@property (nonatomic) double neabyHorizontalMargin;
- (void)setNeabyHorizontalMargin:;
- (double)neabyHorizontalMargin;
+ (double)neabyHorizontalMargin;
+ (id)sharedManager;
@end
