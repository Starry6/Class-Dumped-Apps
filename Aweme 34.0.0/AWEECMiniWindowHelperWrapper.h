@interface AWEECMiniWindowHelperWrapper : NSObject
@property (nonatomic) @ targetObj;
@property (nonatomic) @? clickCloseComplete;
@property (nonatomic) @? customTapComplete;
@property (nonatomic) @? muteStateChangedBlock;
- (void)setTargetObj:;
- (id)targetObj;
- (id)clickCloseComplete;
- (void)setClickCloseComplete:;
- (id)customTapComplete;
- (void)setCustomTapComplete:;
- (id)muteStateChangedBlock;
- (void)setMuteStateChangedBlock:;
- (void).cxx_destruct;
@end
