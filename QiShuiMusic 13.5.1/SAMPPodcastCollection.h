@interface SAMPPodcastCollection : SAMPCollection
@property (nonatomic) NSString artist;
@property (nonatomic) NSArray preferredPlayOrder;
@property (nonatomic) NSString sortArtist;
@property (nonatomic) NSNumber subscribed;
- (id)artist;
- (void)setSubscribed:;
- (void)setArtist:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)subscribed;
- (id)sortArtist;
- (void)setSortArtist:;
- (id)preferredPlayOrder;
- (void)setPreferredPlayOrder:;
+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:context:;
@end
