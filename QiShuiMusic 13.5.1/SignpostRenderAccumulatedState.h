@interface SignpostRenderAccumulatedState : NSObject
@property (nonatomic) I frameSeed;
@property (nonatomic) NSMutableArray imageQueueSampleEvents;
@property (nonatomic) NSMutableArray clientDrawableIntervals;
- (void).cxx_destruct;
- (id)initWithFrameSeed:;
- (unsigned int)frameSeed;
- (id)imageQueueSampleEvents;
- (void)setImageQueueSampleEvents:;
- (id)clientDrawableIntervals;
- (void)setClientDrawableIntervals:;
@end
