@interface AWEPassportNetworkManager : NSObject
@property (nonatomic) <AWEPassportNetworkManager> implementation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)GET:parameters:headers:model:completion:;
- (void)POST:parameters:model:completion:;
- (void)GETJSONDictionary:parameters:headers:completion:;
- (void)POSTJSONDictionary:parameters:completion:;
- (void)GETJSONDictionary:parameters:completion:;
- (id)implementation;
- (void)setImplementation:;
- (id)domain;
- (void).cxx_destruct;
+ (void)setupWithImplementation:;
+ (void)GET:parameters:headers:model:completion:;
+ (void)POST:parameters:model:completion:;
+ (void)GETJSONDictionary:parameters:headers:completion:;
+ (void)POSTJSONDictionary:parameters:completion:;
+ (void)_monitorNetworking:parameters:error:response:;
+ (void)GET:parameters:model:completion:;
+ (id)sharedManager;
@end
