@interface SASPronunciationData : AceObject
@property (nonatomic) NSString apgId;
@property (nonatomic) NSString language;
@property (nonatomic) NSString orthography;
@property (nonatomic) q tokenOffset;
@property (nonatomic) NSArray ttsPronunciations;
@property (nonatomic) NSString ttsVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (id)encodedClassName;
- (id)orthography;
- (void)setOrthography:;
- (id)apgId;
- (void)setApgId:;
- (long long)tokenOffset;
- (void)setTokenOffset:;
- (id)ttsPronunciations;
- (void)setTtsPronunciations:;
- (id)ttsVersion;
- (void)setTtsVersion:;
+ (id)pronunciationData;
+ (id)pronunciationDataWithDictionary:context:;
@end
