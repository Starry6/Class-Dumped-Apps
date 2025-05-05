@interface VCABRResultElement : NSObject
@property (nonatomic) q bitrate;
@property (nonatomic) NSInteger seconds;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) NSInteger cacheTime;
- (int)cacheTime;
- (void)setCacheTime:;
- (int)mediaType;
- (void)setMediaType:;
- (int)seconds;
- (long long)bitrate;
- (void)setSeconds:;
- (void)setBitrate:;
@end
