@interface EDMessageActionHandler : NSObject
@property (nonatomic) NSArray messageActionProviders;
@property (nonatomic) NSArray requiredHeaders;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)extensionsMatched:;
- (void)extensionsNoLongerMatching:;
- (id)initWithExtensionsController:;
- (id)actionProviderInterfacesByExtensionID;
- (id)messageActionProviders;
- (id)actionDecisionForMessage:usingMessageActionProvider:;
- (id)requiredHeaders;
+ (id)log;
@end
