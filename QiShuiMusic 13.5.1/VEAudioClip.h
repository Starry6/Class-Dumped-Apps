@interface VEAudioClip : NSObject
@property (nonatomic) AVAsset asset;
@property (nonatomic) VEAudioConfig audioConfig;
@property (nonatomic) VEAudioReader audioReader;
@property (nonatomic) ^{AudioBufferList=I[1{AudioBuffer=II^v}]} bufferList;
@property (nonatomic) {?=qiIq} seekTime;
@property (nonatomic) VEAudioClip cacheClip;
@property (nonatomic) BOOL isCachedClip;
- (void)setAudioConfig:;
- (void)setAudioReader:;
- (id)audioConfig;
- (id)audioReader;
- (id)bufferList;
- (id)cacheClip;
- (id)initWithAsset:audioConfig:;
- (BOOL)isCachedClip;
- (void)setBufferList:;
- (void)setCacheClip:;
- (void)setIsCachedClip:;
- (void)updateClipRange:;
- (void)updateConfig:discardDecodedBuffer:;
- (id)asset;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setSeekTime:;
- (id)seekTime;
@end
