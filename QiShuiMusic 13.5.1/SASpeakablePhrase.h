@interface SASpeakablePhrase : SADomainObject
@property (nonatomic) NSString phrase;
@property (nonatomic) NSString pronunciation;
- (id)phrase;
- (id)groupIdentifier;
- (void)setPhrase:;
- (id)encodedClassName;
- (id)pronunciation;
- (void)setPronunciation:;
+ (id)speakablePhrase;
+ (id)speakablePhraseWithDictionary:context:;
@end
