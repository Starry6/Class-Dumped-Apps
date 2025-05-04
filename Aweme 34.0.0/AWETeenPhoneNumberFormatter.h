@interface AWETeenPhoneNumberFormatter : NSFormatter
@property (nonatomic) NSString prefix;
@property (nonatomic) AWETeenPhoneTextField textField;
@property (nonatomic) BOOL canAffectLeftViewByFormatter;
- (void)setDefaultOutputPattern:;
- (id)valuesForString:;
- (id)getDefaultOutputPattern;
- (BOOL)canAffectLeftViewByFormatter;
- (void)resetFormats;
- (id)stringWithoutFormat:;
- (id)configForSequence:;
- (id)applyFormat:forFormattedString:;
- (BOOL)isRequireSubstitute:;
- (BOOL)matchString:withPattern:;
- (id)digitOnlyString:;
- (id)defaultPattern;
- (void)setCanAffectLeftViewByFormatter:;
- (id)prefix;
- (id)init;
- (id)textField;
- (void)setPrefix:;
- (void)setTextField:;
- (void).cxx_destruct;
- (id)resetConfig;
+ (id)formattedRemove:AtIndex:;
+ (long long)valuableCharCountIn:;
+ (BOOL)isValuableChar:;
+ (id)digitOnlyString:;
@end
