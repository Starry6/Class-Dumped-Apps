@interface BWCaptureDeferredPhotoProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)request:failedWithError:;
- (void)job:completedWithSampleBuffer:;
- (void)job:failedWithError:;
- (id)initWithFigCaptureDeferredPhotoProcessor:;
- (void)immediateTermination;
@end
