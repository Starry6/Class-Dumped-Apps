@interface AWEUGPendantTrackMananger : NSObject
@property (nonatomic) NSString lastTrackedMaterialID;
@property (nonatomic) NSMutableSet trackedControlledPendantIDSet;
@property (nonatomic) BOOL didTrackShow;
- (BOOL)didTrackShow;
- (void)setDidTrackShow:;
- (BOOL)checkIfNeedTrackMaterialID:;
- (void)recordTrackedMaterialID:;
- (BOOL)hasTrackControlledThisColdLaunch:;
- (void)recordTrackControlledThisColdLaunch:;
- (void)setLastTrackedMaterialID:;
- (id)lastTrackedMaterialID;
- (id)trackedControlledPendantIDSet;
- (void)setTrackedControlledPendantIDSet:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
