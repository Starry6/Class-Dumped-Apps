@interface BWVideoDepthSampleBufferPropagator : BWInferenceSampleBufferPropagator
@property (nonatomic) BOOL allowsAsyncPropagation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowsAsyncPropagation;
- (id)initWithVideoRequirements:cloneRequirements:;
@end
