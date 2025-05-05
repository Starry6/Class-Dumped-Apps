@interface VideoReaderRand : VideoReader
- (void).cxx_destruct;
- (int)reset;
- (id).cxx_construct;
- (id)initFromFile:frameTimes:;
- (id)initFromFile:withParams:;
- (int)indexForTime:;
- (int)getFrameAtTime:frame:rawFrameIndex:;
@end
