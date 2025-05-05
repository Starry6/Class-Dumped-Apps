@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor
@property (nonatomic) MPMediaQuery query;
@property (nonatomic) MPMediaItemCollection itemCollection;
@property (nonatomic) MPMediaItem startItem;
- (id)initWithQuery:;
- (BOOL)isEmpty;
- (id)query;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)itemCollection;
- (id)startItem;
- (id)initWithItemCollection:;
- (void)setStartTime:forItem:;
- (void)setEndTime:forItem:;
- (void)setStartItem:;
+ (BOOL)supportsSecureCoding;
@end
