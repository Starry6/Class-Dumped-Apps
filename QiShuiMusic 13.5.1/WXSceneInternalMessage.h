@interface WXSceneInternalMessage : NSObject
@property (nonatomic) NSString stateId;
@property (nonatomic) NSString stateToken;
@property (nonatomic) NSString stateUrl;
@property (nonatomic) NSString stateTitle;
@property (nonatomic) Q jumpType;
- (unsigned long long)jumpType;
- (void)setJumpType:;
- (void)setStateId:;
- (void)setStateTitle:;
- (void)setStateUrl:;
- (id)stateTitle;
- (id)stateUrl;
- (void)setStateToken:;
- (void).cxx_destruct;
- (id)stateToken;
- (id)stateId;
@end
