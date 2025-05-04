@interface AWEYAPBlueToothService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)postWithData:fromScene:asyncCallback:;
- (long long)checkBLEAuthorizationStatus;
- (void)postWithData:fromScene:duration:asyncCallback:;
- (void)stopAdvertising;
@end
