@interface AWEMusicVideoModelPreview : NSObject
@property (nonatomic) BOOL isPreview;
@property (nonatomic) double duration;
@property (nonatomic) double start;
- (void)setStart:;
- (void)setDuration:;
- (double)duration;
- (BOOL)isPreview;
- (double)start;
- (void)setIsPreview:;
@end
