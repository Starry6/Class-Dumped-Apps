@interface VEAmazingEffectFilterConfig : NSObject
@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL enableAlgorithmAsync;
@property (nonatomic) NSString algoCachePath;
@property (nonatomic) BOOL enableOrientation;
- (BOOL)isUsedForExport;
- (id)algoCachePath;
- (BOOL)enableAlgorithmAsync;
- (BOOL)enableMultiTrack;
- (BOOL)enableOrientation;
- (void)setAlgoCachePath:;
- (void)setEnableAlgorithmAsync:;
- (void)setEnableMultiTrack:;
- (void)setEnableOrientation:;
- (void)setIsUsedForExport:;
- (void).cxx_destruct;
@end
