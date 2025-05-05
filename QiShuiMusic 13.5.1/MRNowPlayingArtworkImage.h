@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString mimeType;
- (id)imageData;
- (id)mimeType;
- (unsigned int)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasArtworkData;
- (BOOL)isEqual:;
- (id)copyImageData;
- (id)initWithImageData:mimeType:;
@end
