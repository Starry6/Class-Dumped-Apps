@interface SAMPAudiobookCollection : SAMPCollection
@property (nonatomic) NSString artist;
@property (nonatomic) NSString sortArtist;
- (id)artist;
- (void)setArtist:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)sortArtist;
- (void)setSortArtist:;
+ (id)audiobookCollection;
+ (id)audiobookCollectionWithDictionary:context:;
@end
