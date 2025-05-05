@interface SAMPArtistCollection : SAMPCollection
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)artistCollection;
+ (id)artistCollectionWithDictionary:context:;
@end
