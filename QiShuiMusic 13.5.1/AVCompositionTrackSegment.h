@interface AVCompositionTrackSegment : AVAssetTrackSegment
@property (nonatomic) BOOL empty;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSInteger sourceTrackID;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)sourceURL;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithTimeMapping:;
- (id)initWithURL:trackID:sourceTimeRange:targetTimeRange:;
- (id)initWithTimeRange:;
- (int)sourceTrackID;
+ (BOOL)supportsSecureCoding;
+ (id)compositionTrackSegmentWithURL:trackID:sourceTimeRange:targetTimeRange:;
+ (id)compositionTrackSegmentWithTimeRange:;
@end
