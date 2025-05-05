@interface VCVideoQualityInfo : VCObject
@property (nonatomic) BOOL isVideoQualityDegraded;
@property (nonatomic) BOOL videoIsExpected;
- (id)init;
- (void)dealloc;
- (void)resetLastGoodVideoQualityTime:;
- (BOOL)updateWithCurrentFramerate:bitrate:time:;
- (void)setVideoIsExpected:;
- (BOOL)isVideoQualityDegraded;
- (BOOL)videoIsExpected;
@end
