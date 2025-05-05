@interface AVMetadataTextRegionObject : AVMetadataObject
@property (nonatomic) q regionID;
@property (nonatomic) float confidence;
@property (nonatomic) float angularOffset;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} angularOffsetBounds;
- (long long)regionID;
- (float)confidence;
- (void)dealloc;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initTextRegionObjectWithDictionary:input:;
- (float)angularOffset;
- (id)angularOffsetBounds;
+ (id)textRegionObjectWithDictionary:input:;
@end
