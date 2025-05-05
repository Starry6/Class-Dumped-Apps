@interface LNBasePhraseTemplateSubstitution : NSObject
@property (nonatomic) NSString basePhraseTemplate;
@property (nonatomic) NSArray parameterSubstitutions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithBasePhraseTemplate:parameterSubstitutions:;
- (id)basePhraseTemplate;
- (id)parameterSubstitutions;
+ (BOOL)supportsSecureCoding;
@end
