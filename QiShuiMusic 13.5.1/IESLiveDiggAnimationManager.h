@interface IESLiveDiggAnimationManager : NSObject
@property (nonatomic) HTSLiveInteractiveAPI linkmicAPI;
@property (nonatomic) double recordTime;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSMutableArray nodeArray;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSDate distantFutureDate;
- (void)addNodeToQueue:;
- (void)checkNodeArray;
- (id)distantFutureDate;
- (id)initWithRoom:containerView:type:;
- (id)linkmicAPI;
- (id)nodeArray;
- (void)playDiggAnimation:avatarImage:iconImage:;
- (void)playDiggAnimation:avatarImage:isAnchor:;
- (double)recordTime;
- (void)setDistantFutureDate:;
- (void)setLinkmicAPI:;
- (void)setNodeArray:;
- (void)setRecordTime:;
- (void)uploadDoubleClickPoint:;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
@end
