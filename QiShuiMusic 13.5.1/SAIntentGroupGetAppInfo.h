@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand
@property (nonatomic) NSArray appIdentifyingInfo;
@property (nonatomic) BOOL shouldSearchLocallyOnly;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setAppIdentifyingInfo:;
- (id)appIdentifyingInfo;
- (BOOL)mutatingCommand;
- (BOOL)shouldSearchLocallyOnly;
- (void)setShouldSearchLocallyOnly:;
+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:context:;
@end
