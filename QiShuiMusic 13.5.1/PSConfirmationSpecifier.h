@interface PSConfirmationSpecifier : PSSpecifier
@property (nonatomic) NSString title;
@property (nonatomic) NSString prompt;
@property (nonatomic) NSString okButton;
@property (nonatomic) NSString alternateButton;
@property (nonatomic) NSString cancelButton;
- (BOOL)isDestructive;
- (id)alternateButton;
- (void)setTitle:;
- (BOOL)isEqualToSpecifier:;
- (void)setPrompt:;
- (id)okButton;
- (void)setAlternateButton:;
- (id)title;
- (void)setupWithDictionary:;
- (void).cxx_destruct;
- (void)setOkButton:;
- (id)prompt;
- (void)setCancelButton:;
- (BOOL)isAlternateDestructive;
- (id)cancelButton;
+ (id)preferenceSpecifierNamed:target:set:get:detail:cell:edit:;
+ (id)specifierWithSpecifier:;
@end
