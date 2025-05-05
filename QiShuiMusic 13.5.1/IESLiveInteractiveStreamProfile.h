@interface IESLiveInteractiveStreamProfile : NSObject
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q fps;
@property (nonatomic) Q biterate;
@property (nonatomic) Q videoProfile;
@property (nonatomic) q streamVideoCodec;
- (unsigned long long)biterate;
- (void)setBiterate:;
- (void)setStreamVideoCodec:;
- (void)setVideoProfile:;
- (long long)streamVideoCodec;
- (void)updateWithLiveStreamModel:;
- (void)updateWithVideoProfile:enableH265:;
- (unsigned long long)videoProfile;
- (id)init;
- (void)setWidth:;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setHeight:;
- (unsigned long long)fps;
- (void)setFps:;
@end
