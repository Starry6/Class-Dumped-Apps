@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData
@property (nonatomic) AVPointCloudData pointCloudData;
@property (nonatomic) BOOL pointCloudDataWasDropped;
@property (nonatomic) q droppedReason;
- (void)dealloc;
- (long long)droppedReason;
- (id)_initWithPointCloudDataBuffer:timestamp:pointCloudDataWasDropped:droppedReason:;
- (id)pointCloudData;
- (BOOL)pointCloudDataWasDropped;
@end
