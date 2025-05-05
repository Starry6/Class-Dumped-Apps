@interface NSAttributedStringMarkdownParsingOptions : NSObject
@property (nonatomic) BOOL allowsExtendedAttributes;
@property (nonatomic) q interpretedSyntax;
@property (nonatomic) q failurePolicy;
@property (nonatomic) NSString languageCode;
@property (nonatomic) BOOL appliesSourcePositionAttributes;
- (id)init;
- (void)dealloc;
- (void)setLanguageCode:;
- (id)languageCode;
- (unsigned long long)hash;
- (BOOL)allowsExtendedAttributes;
- (long long)interpretedSyntax;
- (long long)failurePolicy;
- (void)setAllowsExtendedAttributes:;
- (BOOL)appliesSourcePositionAttributes;
- (void)setInterpretedSyntax:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAppliesSourcePositionAttributes:;
- (void)setFailurePolicy:;
+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;
@end
