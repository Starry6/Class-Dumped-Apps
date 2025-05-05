@interface AXMTranslatedText : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL lowConfidence;
@property (nonatomic) NSLocale targetLocale;
- (double)confidence;
- (void)setConfidence:;
- (void)setText:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isLowConfidence;
- (void)setLowConfidence:;
- (id)targetLocale;
- (void)setTargetLocale:;
+ (BOOL)supportsSecureCoding;
+ (id)text:confidence:isLowConfidence:targetLocale:;
@end
