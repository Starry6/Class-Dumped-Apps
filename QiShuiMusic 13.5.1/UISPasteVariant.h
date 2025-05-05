@interface UISPasteVariant : NSObject
@property (nonatomic) I secureName;
@property (nonatomic) : selector;
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSString glyph;
@property (nonatomic) NSString keyInput;
@property (nonatomic) q keyModifierFlags;
- (SEL)selector;
- (id)glyph;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)localizedStringForLocalization:;
- (long long)keyModifierFlags;
- (id)keyInput;
- (unsigned int)secureName;
- (id)initWithSecureName:selector:actionIdentifier:glpyh:keyInput:keyModifierFlags:;
+ (id)allVariants;
+ (id)variantForSelector:;
+ (id)variantForSecureName:;
+ (id)variantForActionIdentifier:;
@end
