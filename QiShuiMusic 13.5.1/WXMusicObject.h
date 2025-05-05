@interface WXMusicObject : NSObject
@property (nonatomic) NSString musicUrl;
@property (nonatomic) NSString musicLowBandUrl;
@property (nonatomic) NSString musicDataUrl;
@property (nonatomic) NSString musicLowBandDataUrl;
@property (nonatomic) NSString songAlbumUrl;
@property (nonatomic) NSString songLyric;
- (id)musicLowBandUrl;
- (id)musicDataUrl;
- (id)musicLowBandDataUrl;
- (id)musicUrl;
- (void)setMusicDataUrl:;
- (void)setMusicLowBandDataUrl:;
- (void)setMusicLowBandUrl:;
- (void)setMusicUrl:;
- (void)setSongAlbumUrl:;
- (void)setSongLyric:;
- (id)songAlbumUrl;
- (id)songLyric;
- (void).cxx_destruct;
+ (id)object;
@end
