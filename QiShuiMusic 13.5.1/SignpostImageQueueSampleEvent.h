@interface SignpostImageQueueSampleEvent : NSObject
@property (nonatomic) I queueID;
@property (nonatomic) I surfaceID;
@property (nonatomic) double serverSamplingTime;
@property (nonatomic) I queueGeneration;
@property (nonatomic) I frameSeed;
- (unsigned int)surfaceID;
- (unsigned int)frameSeed;
- (unsigned int)queueID;
- (id)initWithImageQueueSampleEvent:;
- (double)serverSamplingTime;
- (unsigned int)queueGeneration;
@end
