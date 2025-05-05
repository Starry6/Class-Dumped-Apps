@interface IESLiveInteractMuteStateMachineConfig : NSObject
@property (nonatomic) Q maskMuteState;
@property (nonatomic) Q scene;
@property (nonatomic) NSString unMuteToastByOther;
@property (nonatomic) NSString muteToastByOther;
- (unsigned long long)maskMuteState;
- (id)muteToastByOther;
- (void)setMaskMuteState:;
- (void)setMuteToastByOther:;
- (void)setUnMuteToastByOther:;
- (id)unMuteToastByOther;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
