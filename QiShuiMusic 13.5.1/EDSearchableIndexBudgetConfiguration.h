@interface EDSearchableIndexBudgetConfiguration : NSObject
@property (nonatomic) BOOL enableActivityBasedScheduling;
@property (nonatomic) BOOL autoStartMaintenanceIndexing;
@property (nonatomic) BOOL allowBacklogIndexingOnPower;
@property (nonatomic) double time;
@property (nonatomic) double periodDuration;
@property (nonatomic) q numberOfItemsToIndexOnResume;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (id)init;
- (double)periodDuration;
- (double)time;
- (long long)numberOfItemsToIndexOnResume;
- (BOOL)autoStartMaintenanceIndexing;
- (id)initWithTime:periodDuration:numberOfItemsToIndexOnResume:enableActivityBasedScheduling:autoStartMaintenanceIndexing:allowBacklogIndexingOnPower:;
- (void)setAutoStartMaintenanceIndexing:;
- (BOOL)enableActivityBasedScheduling;
- (id)description;
- (void)setEnableActivityBasedScheduling:;
- (id)initWithTime:periodDuration:numberOfItemsToIndexOnResume:;
- (void)setAllowBacklogIndexingOnPower:;
- (BOOL)allowBacklogIndexingOnPower;
+ (id)defaultConfiguration;
+ (id)nonSchedulingBudgetConfiguration;
@end
