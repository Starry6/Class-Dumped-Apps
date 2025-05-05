@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor
@property (nonatomic) MPPlaybackArchive playbackArchive;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPlaybackArchive:;
- (id)playbackArchive;
+ (BOOL)supportsSecureCoding;
@end
