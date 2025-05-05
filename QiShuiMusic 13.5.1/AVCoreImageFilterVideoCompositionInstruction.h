@interface AVCoreImageFilterVideoCompositionInstruction : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) {CGAffineTransform=dddddd} sourceTrackPreferredTransform;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) BOOL enablePostProcessing;
@property (nonatomic) BOOL containsTweening;
@property (nonatomic) NSArray requiredSourceTrackIDs;
@property (nonatomic) NSInteger passthroughTrackID;
@property (nonatomic) NSArray requiredSourceSampleDataTrackIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeRange;
- (id)init;
- (void)dealloc;
- (id)handler;
- (BOOL)enablePostProcessing;
- (BOOL)containsTweening;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (id)initWithTimeRange:sourceTrackIDs:handler:;
- (id)sourceTrackPreferredTransform;
- (void)setSourceTrackPreferredTransform:;
@end
