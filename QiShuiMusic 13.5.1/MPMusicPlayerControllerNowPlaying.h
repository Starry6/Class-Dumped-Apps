@interface MPMusicPlayerControllerNowPlaying : NSObject
@property (nonatomic) MPMediaItem item;
@property (nonatomic) MPNowPlayingInfoAudioFormat audioFormat;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSString artworkIdentifier;
@property (nonatomic) q index;
@property (nonatomic) q count;
- (id)itemIdentifier;
- (id)item;
- (id)artworkIdentifier;
- (id)audioFormat;
- (id)initWithCoder:;
- (long long)index;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_init;
- (long long)count;
+ (BOOL)supportsSecureCoding;
+ (id)nowPlayingWithItem:itemIdentifier:artworkIdentifier:index:count:;
+ (id)nowPlayingWithItem:audioFormat:itemIdentifier:artworkIdentifier:index:count:;
@end
