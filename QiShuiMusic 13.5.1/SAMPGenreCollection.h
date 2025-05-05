@interface SAMPGenreCollection : SAMPCollection
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)genreCollection;
+ (id)genreCollectionWithDictionary:context:;
@end
