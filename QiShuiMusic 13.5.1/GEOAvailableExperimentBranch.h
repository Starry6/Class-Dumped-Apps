@interface GEOAvailableExperimentBranch : NSObject
@property (nonatomic) NSArray clientConfig;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString label;
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary clientConfigValues;
@property (nonatomic) BOOL active;
- (id)_dictionaryRepresentation;
- (id)label;
- (id)_descriptionWithIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isActive;
- (id)initWithLabel:name:experimentIdentifier:;
- (void)_addAssignment:;
- (id)querySubstringForType:dispatcherRequestType:;
- (id)clientConfigValues;
- (id)_clientConfig;
- (void)_setClientConfig:;
@end
