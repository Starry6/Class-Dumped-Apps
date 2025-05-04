@interface AWEOpenPlatformActionTrackerService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)updateParams:withUniqueID:;
+ (void)uploadLocalTrackerWithUniqueID:;
+ (void)tryUploadAllLocalTracker;
+ (void)createLocalTrackerWithName:withUniqueID:;
+ (void)updateStage:withUniqueID:;
@end
