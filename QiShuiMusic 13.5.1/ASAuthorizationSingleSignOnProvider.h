@interface ASAuthorizationSingleSignOnProvider : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL canPerformAuthorization;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)init;
- (id)initWithURL:;
- (id)createRequest;
- (void).cxx_destruct;
- (BOOL)canPerformAuthorization;
+ (id)new;
+ (id)authorizationProviderWithIdentityProviderURL:;
@end
