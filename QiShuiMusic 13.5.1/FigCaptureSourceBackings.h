@interface FigCaptureSourceBackings : NSObject
@property (nonatomic) NSArray sourceInfoDictionaries;
@property (nonatomic) FigCaptureSourceCommonSettings commonSettings;
@property (nonatomic) NSDictionary hevcSettings;
@property (nonatomic) NSDictionary h264Settings;
@property (nonatomic) NSDictionary continuityCaptureCameraCapabilities;
- (void)dealloc;
- (id)h264Settings;
- (id)continuityCaptureCameraCapabilities;
- (id)initWithSourceInfoDictionaries:commonSettings:hevcSettings:h264Settings:;
- (id)hevcSettings;
- (id)commonSettings;
- (id)sourceInfoDictionaries;
+ (id)sharedCaptureSourceBackings;
@end
