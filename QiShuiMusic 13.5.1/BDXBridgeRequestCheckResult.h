@interface BDXBridgeRequestCheckResult : NSObject
@property (nonatomic) Q action;
@property (nonatomic) BOOL checkSuccess;
@property (nonatomic) NSString denyReason;
@property (nonatomic) NSDictionary trackingsInfo;
@property (nonatomic) NSDictionary trackingsWarn;
- (BOOL)checkSuccess;
- (void)setCheckSuccess:;
- (void)setTrackingsInfo:;
- (void)setTrackingsWarn:;
- (id)trackingsInfo;
- (id)trackingsWarn;
- (unsigned long long)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)denyReason;
- (void)setDenyReason:;
@end
