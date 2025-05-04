@interface AWESecWebViewAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldForceHttpsForURL:;
+ (BOOL)bdForceHttpsRequest;
+ (id)sharedDomains;
+ (id)sharedAdater;
@end
