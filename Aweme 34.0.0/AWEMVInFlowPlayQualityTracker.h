@interface AWEMVInFlowPlayQualityTracker : NSObject
@property (nonatomic) double clickCellTime;
@property (nonatomic) Q clickCardType;
@property (nonatomic) double inFlowWillAppearTime;
@property (nonatomic) double inFlowCellDisplayTime;
@property (nonatomic) double inFlowPlayTime;
@property (nonatomic) BOOL isContinuePlay;
- (void)setIsContinuePlay:;
- (BOOL)isContinuePlay;
- (double)clickCellTime;
- (unsigned long long)clickCardType;
- (double)inFlowPlayTime;
- (double)inFlowCellDisplayTime;
- (double)inFlowWillAppearTime;
- (void)setClickCellTime:;
- (void)setClickCardType:;
- (void)setInFlowWillAppearTime:;
- (void)setInFlowCellDisplayTime:;
- (void)setInFlowPlayTime:;
- (void)trackJumpToInFlow;
- (void)reset;
@end
