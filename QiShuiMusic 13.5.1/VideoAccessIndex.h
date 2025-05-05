@interface VideoAccessIndex : NSObject
@property (nonatomic) VideoReaderRand readerRand;
@property (nonatomic) AVAssetTrack videoTrack;
@property (nonatomic) AVAsset asset;
- (id)asset;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)videoTrack;
- (id)initFromFile:pixelFormat:frameTimes:;
- (int)getFrameAtIndex:pixBuf:;
- (id)readerRand;
- (void)setReaderRand:;
@end
