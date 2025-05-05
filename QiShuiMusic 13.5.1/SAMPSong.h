@interface SAMPSong : SAMPMediaItem
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)song;
+ (id)songWithDictionary:context:;
@end
