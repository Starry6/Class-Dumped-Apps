@interface AWENearbyVCStackRollBackManager : NSObject
@property (nonatomic) NSMutableDictionary rollBackStatusInfo;
- (void)setLiveRoomMute:;
- (void)clearViewControllerStackWithPageType:;
- (BOOL)popViewControllerStackWithPageType:;
- (BOOL)stashViewControllerStackWithPageType:;
- (void)p_clearViewControllerStackWithPageType:;
- (id)rollBackStatusModelWithPageTypeID:;
- (id)removePresentVCWithMultiPresented:;
- (id)removeLastUnStashVCWithVCStack:;
- (void)dealtStackAndPresentedWithPageType:trackParams:;
- (id)rollBackStatusInfo;
- (void)setRollBackStatusInfo:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)presentVCStack:byPresentingVC:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
