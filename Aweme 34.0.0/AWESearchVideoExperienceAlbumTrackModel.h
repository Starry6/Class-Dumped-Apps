@interface AWESearchVideoExperienceAlbumTrackModel : NSObject
@property (nonatomic) NSString awemeItemId;
@property (nonatomic) NSString uri;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) q errorCode;
@property (nonatomic) AWESearchVideoExperienceTrackStateMachine albumMachine;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)awemeItemId;
- (void)setAwemeItemId:;
- (id)albumMachine;
- (void)setAlbumMachine:;
- (void)setErrorCode:;
- (void)setStartTime:;
- (double)endTime;
- (long long)errorCode;
- (void)setEndTime:;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (double)startTime;
@end
