@interface WBSLocalePair : NSObject
@property (nonatomic) NSLocale sourceLocale;
@property (nonatomic) NSLocale targetLocale;
@property (nonatomic) NSString sourceLocaleIdentifier;
@property (nonatomic) NSString targetLocaleIdentifier;
@property (nonatomic) NSString compactDescriptionForLogging;
@property (nonatomic) _LTLocalePair lt_localePair;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceLocale:targetLocale:;
- (id)initWithSourceLocaleIdentifier:targetLocaleIdentifier:;
- (id)initWithLTLocalePair:;
- (id)sourceLocaleIdentifier;
- (id)targetLocaleIdentifier;
- (id)lt_localePair;
- (id)compactDescriptionForLogging;
- (id)sourceLocale;
- (id)targetLocale;
@end
