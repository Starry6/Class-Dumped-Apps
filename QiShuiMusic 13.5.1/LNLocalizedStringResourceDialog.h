@interface LNLocalizedStringResourceDialog : LNDialog
@property (nonatomic) LNStaticDeferredLocalizedString fullString;
@property (nonatomic) LNStaticDeferredLocalizedString supportingString;
- (void)getResultWithCompletionHandler:;
- (id)localeXML;
- (id)parametersXML;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)fullString;
- (id)initWithFullString:supportingString:localeIdentifier:;
- (id)supportingString;
+ (BOOL)supportsSecureCoding;
@end
