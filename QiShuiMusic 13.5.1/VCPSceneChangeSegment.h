@interface VCPSceneChangeSegment : NSObject
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q numOfFrames;
- (id)timeRange;
- (id)init;
- (void)mergeSegment:;
- (unsigned long long)numOfFrames;
- (void)resetSegment:;
- (void)updateSegment:;
- (void)finalizeAtTime:;
@end
