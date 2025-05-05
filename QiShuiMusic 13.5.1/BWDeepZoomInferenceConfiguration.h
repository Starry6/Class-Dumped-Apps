@interface BWDeepZoomInferenceConfiguration : BWTiledEspressoInferenceConfiguration
@property (nonatomic) NSInteger version;
@property (nonatomic) NSInteger type;
- (void)dealloc;
- (void)setVersion:;
- (int)version;
- (void)setType:;
- (int)type;
@end
