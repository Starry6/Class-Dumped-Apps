@interface PSTextFieldSpecifier : PSSpecifier
- (id)placeholder;
- (void)setPlaceholder:;
- (BOOL)isEqualToSpecifier:;
- (void).cxx_destruct;
+ (id)preferenceSpecifierNamed:target:set:get:detail:cell:edit:;
+ (id)specifierWithSpecifier:;
@end
