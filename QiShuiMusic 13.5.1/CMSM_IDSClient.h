@interface CMSM_IDSClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)service:account:identifier:didSendWithSuccess:error:;
- (BOOL)sendMessage:toDestinations:priority:options:identifier:error:;
@end
