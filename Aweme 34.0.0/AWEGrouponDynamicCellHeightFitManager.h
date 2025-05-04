@interface AWEGrouponDynamicCellHeightFitManager : NSObject
- (double)threshold;
- (BOOL)enable;
- (id)settings;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
