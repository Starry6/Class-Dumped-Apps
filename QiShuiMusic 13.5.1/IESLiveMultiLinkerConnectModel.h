@interface IESLiveMultiLinkerConnectModel : NSObject
@property (nonatomic) Q connectRole;
@property (nonatomic) NSMutableArray waitFirstFrameArray;
@property (nonatomic) q waitFrameTotalCount;
@property (nonatomic) BOOL isFromTransform;
@property (nonatomic) double startTime;
@property (nonatomic) NSString connectionId;
@property (nonatomic) q fromStatus;
@property (nonatomic) q oppositeStatus;
- (BOOL)isFromTransform;
- (void)setConnectRole:;
- (unsigned long long)connectRole;
- (long long)oppositeStatus;
- (void)setIsFromTransform:;
- (void)setOppositeStatus:;
- (void)setWaitFirstFrameArray:;
- (void)setWaitFrameTotalCount:;
- (id)waitFirstFrameArray;
- (long long)waitFrameTotalCount;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (id)connectionId;
- (void)setConnectionId:;
- (long long)fromStatus;
- (void)setFromStatus:;
@end
