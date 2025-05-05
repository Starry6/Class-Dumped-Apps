@interface IESECMiniWindowHelperWrapper : NSObject
@property (nonatomic) @ targetObj;
@property (nonatomic) @? clickCloseComplete;
@property (nonatomic) @? customTapComplete;
@property (nonatomic) @? muteStateChangedBlock;
- (id)clickCloseComplete;
- (id)customTapComplete;
- (id)muteStateChangedBlock;
- (void)setClickCloseComplete:;
- (void)setCustomTapComplete:;
- (void)setMuteStateChangedBlock:;
- (void)setTargetObj:;
- (id)targetObj;
- (void).cxx_destruct;
@end
