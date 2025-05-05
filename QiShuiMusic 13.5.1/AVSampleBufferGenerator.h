@interface AVSampleBufferGenerator : NSObject
- (id)init;
- (void)dealloc;
- (id)copyWithZone:;
- (id)initWithAsset:timebase:;
- (id)_figSampleGenerator;
- (id)makeBatch;
- (id)createSampleBufferForRequest:error:;
- (id)createSampleBufferForRequest:;
- (id)createSampleBufferForRequest:addingToBatch:error:;
+ (void)notifyOfDataReadyForSampleBuffer:completionHandler:;
@end
