@interface MPNowPlayingInfoCenterArtworkContext : NSObject
@property (nonatomic) NSString artworkIdentifier;
@property (nonatomic) MPMediaItemArtwork artwork;
@property (nonatomic) NSData artworkData;
- (void)setArtworkData:;
- (id)artworkData;
- (id)artwork;
- (void)setArtworkIdentifier:;
- (id)artworkIdentifier;
- (void).cxx_destruct;
- (void)setArtwork:;
@end
