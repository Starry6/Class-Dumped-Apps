@interface LNAutoShortcutSubstitution : NSObject
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSArray basePhraseTemplateSubstitutions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:basePhraseTemplateSubstitutions:;
- (id)basePhraseTemplateSubstitutions;
+ (BOOL)supportsSecureCoding;
@end
