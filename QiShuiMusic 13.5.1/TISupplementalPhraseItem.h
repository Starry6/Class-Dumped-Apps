@interface TISupplementalPhraseItem : TISupplementalItem
@property (nonatomic) NSString title;
@property (nonatomic) NSString phoneticTitle;
- (id)initWithTitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:phoneticTitle:;
- (id)phoneticTitle;
- (void)setPhoneticTitle:;
+ (BOOL)supportsSecureCoding;
@end
