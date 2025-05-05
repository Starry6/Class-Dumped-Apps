@interface StreamEncodingObject : NSObject
@property (nonatomic) BOOL lossless;
@property (nonatomic) float bitrate;
@property (nonatomic) BOOL forceH264;
@property (nonatomic) float expectedFPS;
@property (nonatomic) NSDictionary extraConfigs;
- (id)init;
- (float)bitrate;
- (void).cxx_destruct;
- (void)setBitrate:;
- (float)expectedFPS;
- (void)setExpectedFPS:;
- (id)initWithLossless:bitrate:forceH264:expectedFPS:extraConfigs:;
- (BOOL)lossless;
- (void)setLossless:;
- (BOOL)forceH264;
- (void)setForceH264:;
- (id)extraConfigs;
- (void)setExtraConfigs:;
@end
