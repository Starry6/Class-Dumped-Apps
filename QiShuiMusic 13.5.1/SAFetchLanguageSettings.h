@interface SAFetchLanguageSettings : SABaseCommand
@property (nonatomic) NSString idiom;
@property (nonatomic) NSString systemBuildPrefix;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIdiom:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)idiom;
- (id)encodedClassName;
- (id)systemBuildPrefix;
- (void)setSystemBuildPrefix:;
+ (id)fetchLanguageSettings;
+ (id)fetchLanguageSettingsWithDictionary:context:;
@end
