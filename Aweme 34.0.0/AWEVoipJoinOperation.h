@interface AWEVoipJoinOperation : AWEVoipBaseOperation
@property (nonatomic) NSString roomID;
@property (nonatomic) NSNumber cameraOff;
@property (nonatomic) NSDictionary trackContext;
@property (nonatomic) @? completion;
@property (nonatomic) NSString followUserID;
- (id)trackContext;
- (void)setTrackContext:;
- (id)initWithRoomID:enterFrom:;
- (id)cameraOff;
- (void)setCameraOff:;
- (id)followUserID;
- (void)setFollowUserID:;
- (id)awe_internalOperation;
- (id)awe_bizType;
- (id)roomID;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setRoomID:;
@end
