@interface IESLivePlayAlphaVideoParamModel : IESLiveBridgeModel
@property (nonatomic) NSString resourcePath;
@property (nonatomic) BOOL enableAudio;
@property (nonatomic) BOOL enableVibrate;
@property (nonatomic) BOOL displayImmediately;
@property (nonatomic) BOOL aboveLynxView;
@property (nonatomic) NSDictionary trackExtra;
- (void)setEnableAudio:;
- (BOOL)aboveLynxView;
- (BOOL)displayImmediately;
- (BOOL)enableAudio;
- (BOOL)enableVibrate;
- (void)setAboveLynxView:;
- (void)setDisplayImmediately:;
- (void)setEnableVibrate:;
- (void)setTrackExtra:;
- (id)trackExtra;
- (void).cxx_destruct;
- (id)resourcePath;
- (void)setResourcePath:;
+ (id)modelCustomPropertyMapper;
@end
