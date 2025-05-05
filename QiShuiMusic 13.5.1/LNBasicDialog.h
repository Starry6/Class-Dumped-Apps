@interface LNBasicDialog : LNDialog
@property (nonatomic) LNDeferredLocalizedString fullString;
@property (nonatomic) LNDeferredLocalizedString supportingString;
@property (nonatomic) LNDeferredLocalizedString printedString;
@property (nonatomic) LNDeferredLocalizedString spokenString;
- (id)parameters;
- (void)getResultWithCompletionHandler:;
- (id)localeXML;
- (id)parametersXML;
- (id)parameterDefinitions;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)fullString;
- (id)initWithFullString:supportingString:localeIdentifier:;
- (id)initWithPrintedString:spokenString:localeIdentifier:;
- (id)supportingString;
- (id)printedString;
- (id)spokenString;
+ (BOOL)supportsSecureCoding;
@end
