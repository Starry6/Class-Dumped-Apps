@interface SAMPAlbumCollection : SAMPCollection
@property (nonatomic) NSString artist;
@property (nonatomic) NSString description;
@property (nonatomic) NSString sortArtist;
- (id)artist;
- (void)setArtist:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)description;
- (void)setDescription:;
- (id)sortArtist;
- (void)setSortArtist:;
+ (id)albumCollection;
+ (id)albumCollectionWithDictionary:context:;
@end
