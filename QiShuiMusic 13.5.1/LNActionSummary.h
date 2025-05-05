@interface LNActionSummary : LNActionConfiguration
@property (nonatomic) LNActionSummaryString summaryString;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSString table;
@property (nonatomic) NSArray otherParameterIdentifiers;
- (id)bundleURL;
- (id)table;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)summaryString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSummaryString:bundleURL:table:otherParameterIdentifiers:;
- (id)otherParameterIdentifiers;
- (id)localizedFormatStringForLocaleIdentifier:;
- (id)actionConfigurationByEvaluatingAction:;
+ (BOOL)supportsSecureCoding;
@end
