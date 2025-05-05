@interface AnnieXLynxTemplateBundlePostProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxSignVerifierWithResponse:originURL:containerName:bid:aid:enterFrom:;
- (void)processRawResponse:completion:;
- (id)name;
+ (id)sharedInstance;
@end
