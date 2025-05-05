@interface MRNowPlayingArtwork : NSObject
@property (nonatomic) I type;
@property (nonatomic) BOOL hasArtworkData;
- (unsigned int)type;
- (BOOL)hasArtworkData;
- (id)copyImageData;
@end
