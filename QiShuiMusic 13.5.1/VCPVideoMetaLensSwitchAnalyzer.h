@interface VCPVideoMetaLensSwitchAnalyzer : NSObject
@property (nonatomic) BOOL hadZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) float maxZoom;
- (id)init;
- (float)minZoom;
- (void)setMinZoom:;
- (id)results;
- (void)setMaxZoom:;
- (float)maxZoom;
- (BOOL)hadZoom;
- (void)setHadZoom:;
@end
