@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData
@property (nonatomic) AVDepthData depthData;
@property (nonatomic) BOOL depthDataWasDropped;
@property (nonatomic) q droppedReason;
- (void)dealloc;
- (id)debugDescription;
- (id)depthData;
- (id)description;
- (long long)droppedReason;
- (BOOL)depthDataWasDropped;
- (id)_initWithDepthData:timestamp:depthDataWasDropped:droppedReason:;
@end
