@interface VCPCtrTracker : NSObject
@property (nonatomic) ^{CGPoint=dd} box;
@property (nonatomic) BOOL stableInd;
@property (nonatomic) BOOL lostTrackInd;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)init;
- (void)setConfidence:;
- (void)dealloc;
- (id)box;
- (void)setBox:;
- (void)setupTrackerWithReferenceFrame:withROI:;
- (void)trackInFrame:;
- (BOOL)stableInd;
- (void)setStableInd:;
- (BOOL)lostTrackInd;
- (void)setLostTrackInd:;
@end
