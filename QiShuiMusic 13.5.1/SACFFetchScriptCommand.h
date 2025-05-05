@interface SACFFetchScriptCommand : SABaseCommand
@property (nonatomic) NSString fetchScriptType;
@property (nonatomic) NSArray jsScriptIdentifiers;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)fetchScriptType;
- (void)setFetchScriptType:;
- (id)jsScriptIdentifiers;
- (void)setJsScriptIdentifiers:;
+ (id)fetchScriptCommand;
+ (id)fetchScriptCommandWithDictionary:context:;
@end
