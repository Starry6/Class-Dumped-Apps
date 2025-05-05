@interface SAMPAudiobook : SAMPMediaItem
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)audiobook;
+ (id)audiobookWithDictionary:context:;
@end
