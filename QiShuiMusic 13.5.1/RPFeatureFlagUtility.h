@interface RPFeatureFlagUtility : NSObject
@property (nonatomic) BOOL stereoAudioControlCenter;
@property (nonatomic) BOOL screenRecordingCameraPip;
@property (nonatomic) BOOL systemBannerEnabled;
@property (nonatomic) BOOL alwaysOnDisplayEnabled;
- (id)init;
- (BOOL)screenRecordingCameraPip;
- (BOOL)stereoAudioControlCenter;
- (BOOL)systemBannerEnabled;
- (BOOL)alwaysOnDisplayEnabled;
+ (id)sharedInstance;
@end
