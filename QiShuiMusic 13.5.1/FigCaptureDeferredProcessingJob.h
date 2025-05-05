@interface FigCaptureDeferredProcessingJob : NSObject
@property (nonatomic) FigCaptureDeferredPhotoProcessorRequest processorRequest;
@property (nonatomic) q startNS;
@property (nonatomic) q durationNS;
@property (nonatomic) NSString masterPortType;
- (void)dealloc;
- (void)start;
- (id)container;
- (void)failedWithError:;
- (id)masterPortType;
- (id)initWithProcessorRequest:delegate:error:;
- (void)completedWithSampleBuffer:;
- (long long)durationNS;
- (void)setDurationNS:;
- (id)processorRequest;
- (long long)startNS;
- (void)setStartNS:;
+ (BOOL)isPotentiallyRecoverableError:;
@end
