@interface AVOutputDeviceAuthorizationRequest : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSError error;
@property (nonatomic) NSString ID;
@property (nonatomic) AVOutputDevice outputDevice;
@property (nonatomic) NSString authorizationTokenType;
- (id)ID;
- (void)cancel;
- (id)outputDevice;
- (void)dealloc;
- (id)error;
- (id)impl;
- (id)description;
- (long long)status;
- (id)initWithOutputDeviceAuthorizationRequestImpl:;
- (id)authorizationTokenType;
- (void)respondWithAuthorizationToken:completionHandler:;
@end
