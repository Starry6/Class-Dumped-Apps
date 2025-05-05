@interface MCAirPlaySecurityPayload : MCPayload
@property (nonatomic) NSString accessType;
@property (nonatomic) NSString securityType;
@property (nonatomic) NSString password;
- (id)securityType;
- (void)setSecurityType:;
- (void)setPassword:;
- (id)password;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)accessType;
- (void)setAccessType:;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
