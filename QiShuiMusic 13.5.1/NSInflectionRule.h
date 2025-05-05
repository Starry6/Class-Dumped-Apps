@interface NSInflectionRule : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)canInflectLanguage:;
+ (BOOL)canInflectPreferredLocalization;
+ (id)automaticRule;
+ (BOOL)_canInflectArbitraryWordsForPreferredLocalization;
+ (BOOL)_canInflectArbitraryWordsForLanguage:;
@end
