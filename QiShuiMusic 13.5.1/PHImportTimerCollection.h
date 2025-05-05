@interface PHImportTimerCollection : NSObject
@property (nonatomic) C aspectRatio;
- (void)setAspectRatio:;
- (unsigned char)aspectRatio;
- (void).cxx_destruct;
- (id)description;
- (id)initForMediaType:fileSize:;
- (id)startTiming:subtype:;
- (void)stopTiming:;
- (void)processTimesOfType:withBlock:;
- (double)duration:;
@end
