@interface AVTimedMetadataGroup : AVMetadataGroup
@property (nonatomic) AVTimedMetadataGroupInternal timedMetadataGroupInternal;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) NSArray items;
- (id)timeRange;
- (id)init;
- (void)dealloc;
- (id)items;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)copyFormatDescription;
- (id)initWithItems:timeRange:;
- (id)initWithSampleBuffer:;
- (id)_timedMetadataGroupInternal;
- (id)_createSerializedRepresentationWithFormatDescription:error:;
@end
