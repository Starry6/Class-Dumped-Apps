@interface HTSMixPlayerConfig : NSObject
@property (nonatomic) BOOL useNewModule;
@property (nonatomic) BOOL noneedProcessAudio;
@property (nonatomic) BOOL usedForAVPlayLayer;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL onlyAudio;
@property (nonatomic) BOOL isPreviewMode;
- (BOOL)enableMultiTrack;
- (BOOL)isPreviewMode;
- (BOOL)noneedProcessAudio;
- (BOOL)onlyAudio;
- (void)setEnableMultiTrack:;
- (void)setIsPreviewMode:;
- (void)setNoneedProcessAudio:;
- (void)setOnlyAudio:;
- (void)setUseNewModule:;
- (void)setUsedForAVPlayLayer:;
- (BOOL)useNewModule;
- (BOOL)usedForAVPlayLayer;
@end
