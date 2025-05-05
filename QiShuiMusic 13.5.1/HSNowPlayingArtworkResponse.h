@interface HSNowPlayingArtworkResponse : HSResponse
@property (nonatomic) NSData artworkData;
@property (nonatomic) NSString artworkMIMEType;
- (id)artworkMIMEType;
- (void)setArtworkData:;
- (id)artworkData;
- (void)setArtworkMIMEType:;
- (void).cxx_destruct;
@end
