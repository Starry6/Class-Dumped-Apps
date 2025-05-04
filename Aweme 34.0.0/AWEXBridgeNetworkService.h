@interface AWEXBridgeNetworkService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiParams;
- (void)requestWithParam:completionHandler:;
- (void)uploadFileWithParam:completionHandler:;
- (void)trackRequest:;
@end
