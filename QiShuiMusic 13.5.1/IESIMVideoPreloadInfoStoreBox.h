@interface IESIMVideoPreloadInfoStoreBox : NSObject
@property (nonatomic) NSNumber preloadSize;
@property (nonatomic) NSNumber mediaSize;
@property (nonatomic) NSNumber bitrate;
@property (nonatomic) NSString urlString;
@property (nonatomic) NSString videoID;
- (void)setPreloadSize:;
- (id)initWithBitrate:urlString:videoId:;
- (id)initWithPreloadedSize:mediaSize:urlString:videoId:;
- (id)preloadSize;
- (id)urlString;
- (id)bitrate;
- (void).cxx_destruct;
- (void)setUrlString:;
- (void)setBitrate:;
- (id)videoID;
- (void)setVideoID:;
- (id)mediaSize;
- (void)setMediaSize:;
@end
