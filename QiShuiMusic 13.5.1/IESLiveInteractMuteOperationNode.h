@interface IESLiveInteractMuteOperationNode : NSObject
@property (nonatomic) BOOL mute;
@property (nonatomic) Q state;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL noRequestOnMuteSelf;
- (BOOL)noRequestOnMuteSelf;
- (void)setNoRequestOnMuteSelf:;
- (BOOL)mute;
- (BOOL)force;
- (void)setForce:;
- (void)setState:;
- (void)setMute:;
- (unsigned long long)state;
@end
