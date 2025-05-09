@interface MPMusicPlayerServerStateUpdateRecord : NSObject
@property (nonatomic) BOOL hasQueueDescriptor;
@property (nonatomic) MPMusicPlayerQueueDescriptor queueDescriptor;
@property (nonatomic) BOOL hasNowPlaying;
@property (nonatomic) MPMusicPlayerControllerNowPlaying nowPlaying;
@property (nonatomic) BOOL hasTimeSnapshot;
@property (nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot timeSnapshot;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) q repeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) q shuffleMode;
@property (nonatomic) BOOL hasContentItemIDs;
@property (nonatomic) NSArray contentItemIDs;
@property (nonatomic) BOOL queueDidChange;
@property (nonatomic) BOOL itemDidEnd;
@property (nonatomic) BOOL queueDidEnd;
@property (nonatomic) BOOL audioFormatDidChange;
- (void)setNowPlaying:;
- (void)setRepeatMode:;
- (void)setShuffleMode:;
- (void)setQueueDescriptor:;
- (id)initWithCoder:;
- (id)nowPlaying;
- (void)encodeWithCoder:;
- (long long)repeatMode;
- (void).cxx_destruct;
- (id)queueDescriptor;
- (long long)shuffleMode;
- (void)setHasRepeatMode:;
- (BOOL)hasRepeatMode;
- (void)setHasShuffleMode:;
- (BOOL)hasShuffleMode;
- (BOOL)hasQueueDescriptor;
- (void)setHasQueueDescriptor:;
- (BOOL)hasNowPlaying;
- (void)setHasNowPlaying:;
- (BOOL)hasTimeSnapshot;
- (void)setHasTimeSnapshot:;
- (id)timeSnapshot;
- (void)setTimeSnapshot:;
- (BOOL)hasContentItemIDs;
- (void)setHasContentItemIDs:;
- (id)contentItemIDs;
- (void)setContentItemIDs:;
- (BOOL)queueDidChange;
- (void)setQueueDidChange:;
- (BOOL)itemDidEnd;
- (void)setItemDidEnd:;
- (BOOL)queueDidEnd;
- (void)setQueueDidEnd:;
- (BOOL)audioFormatDidChange;
- (void)setAudioFormatDidChange:;
+ (BOOL)supportsSecureCoding;
@end
