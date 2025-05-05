@interface VCVideoFECStatsHolder : NSObject
@property (nonatomic) Q totalFECDataByteCount;
@property (nonatomic) Q totalFECParityByteCount;
@property (nonatomic) I totalFECFrameCount;
@property (nonatomic) I completeFECFrameCount;
@property (nonatomic) I failedFECFrameCount;
@property (nonatomic) I unfixableFECFrameCount;
- (void)merge:;
- (unsigned long long)totalFECDataByteCount;
- (void)setTotalFECDataByteCount:;
- (unsigned long long)totalFECParityByteCount;
- (void)setTotalFECParityByteCount:;
- (unsigned int)totalFECFrameCount;
- (void)setTotalFECFrameCount:;
- (unsigned int)completeFECFrameCount;
- (void)setCompleteFECFrameCount:;
- (unsigned int)failedFECFrameCount;
- (void)setFailedFECFrameCount:;
- (unsigned int)unfixableFECFrameCount;
- (void)setUnfixableFECFrameCount:;
@end
