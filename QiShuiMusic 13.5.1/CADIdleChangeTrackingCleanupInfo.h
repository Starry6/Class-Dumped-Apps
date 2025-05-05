@interface CADIdleChangeTrackingCleanupInfo : NSObject
@property (nonatomic) double languishPeriod;
@property (nonatomic) NSInteger numberOfChanges;
- (id)description;
- (BOOL)isEqual:;
- (int)numberOfChanges;
- (void)setNumberOfChanges:;
- (id)initWithLanguishPeriod:numberOfChanges:;
- (BOOL)isEqualToInfo:;
- (double)languishPeriod;
- (void)setLanguishPeriod:;
+ (id)serverIdleChangeTrackingCleanupInfo;
@end
