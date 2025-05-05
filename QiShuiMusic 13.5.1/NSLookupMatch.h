@interface NSLookupMatch : NSObject
@property (nonatomic) NSTextCheckingResult dataDetectorResult;
@property (nonatomic) NSString languageIdentifier;
@property (nonatomic) Q matchType;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) double score;
- (void)dealloc;
- (double)score;
- (id)range;
- (id)description;
- (id)initWithType:range:score:;
- (unsigned long long)matchType;
- (id)dataDetectorResult;
- (void)setDataDetectorResult:;
- (id)languageIdentifier;
- (void)setLanguageIdentifier:;
+ (id)matchesInString:types:range:;
@end
