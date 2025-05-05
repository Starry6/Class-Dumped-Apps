@interface SAMPPlaylist : SAMPCollection
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)playlist;
+ (id)playlistWithDictionary:context:;
@end
