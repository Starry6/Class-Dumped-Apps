@interface SACFProvideContext : SABaseCommand
@property (nonatomic) NSString context;
@property (nonatomic) NSString contextVersion;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)context;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setContext:;
- (id)contextVersion;
- (void)setContextVersion:;
+ (id)provideContext;
+ (id)provideContextWithDictionary:context:;
@end
