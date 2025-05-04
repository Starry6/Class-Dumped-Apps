@interface AWEHPHambSettingsNetworkManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_handleResponse:;
- (id)getBodyInRequest:;
- (void)handleResponse:;
+ (id)sharedInstance;
@end
