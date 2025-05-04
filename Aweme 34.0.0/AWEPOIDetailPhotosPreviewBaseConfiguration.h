@interface AWEPOIDetailPhotosPreviewBaseConfiguration : NSObject
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) q defaultIdx;
@property (nonatomic) NSArray photos;
@property (nonatomic) BOOL shouldContainBottomHeight;
@property (nonatomic) BOOL useNewVideoStyle;
- (BOOL)disableZoomTransition;
- (void)setDisableZoomTransition:;
- (void)setDefaultIdx:;
- (void)setAllowLoop:;
- (BOOL)allowLoop;
- (long long)defaultIdx;
- (void)setShouldContainBottomHeight:;
- (void)setUseNewVideoStyle:;
- (BOOL)useNewVideoStyle;
- (BOOL)shouldContainBottomHeight;
- (void).cxx_destruct;
- (id)photos;
- (void)setPhotos:;
@end
