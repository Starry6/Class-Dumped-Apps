@interface MCSingleSignOnPayload : MCPayload
@property (nonatomic) NSString humanReadableName;
@property (nonatomic) MCSingleSignOnPayloadKerberosInfo kerberosInfo;
- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)humanReadableName;
- (void)setHumanReadableName:;
- (id)kerberosInfo;
- (void)setKerberosInfo:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
