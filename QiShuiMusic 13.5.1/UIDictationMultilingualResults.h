@interface UIDictationMultilingualResults : NSObject
@property (nonatomic) NSArray phrases;
@property (nonatomic) NSString dominantLanguage;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dominantLanguage;
- (void)setDominantLanguage:;
- (id)phrases;
- (void)setPhrases:;
- (id)initWithPhrases:dominantLanguage:;
@end
