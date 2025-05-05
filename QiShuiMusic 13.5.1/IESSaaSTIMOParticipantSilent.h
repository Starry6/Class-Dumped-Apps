@interface IESSaaSTIMOParticipantSilent : NSObject
@property (nonatomic) q userID;
@property (nonatomic) q silentTime;
- (void)setSilentTime:;
- (long long)silentTime;
- (long long)userID;
- (void)setUserID:;
@end
