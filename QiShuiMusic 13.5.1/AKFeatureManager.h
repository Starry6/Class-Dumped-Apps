@interface AKFeatureManager : NSObject
@property (nonatomic) BOOL lisbonAvailable;
- (id)init;
- (BOOL)isLisbonAvailable;
+ (id)sharedManager;
@end
