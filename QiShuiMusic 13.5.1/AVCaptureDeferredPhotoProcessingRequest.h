@interface AVCaptureDeferredPhotoProcessingRequest : NSObject
@property (nonatomic) NSArray delegatesStorage;
@property (nonatomic) AVCaptureDeferredPhotoProxy photoProxy;
@property (nonatomic) I firedCallbackFlags;
- (void)addDelegate:;
- (void)dealloc;
- (void)setFiredCallbackFlags:;
- (unsigned int)firedCallbackFlags;
- (id)initWithDelegate:photoProxy:;
- (id)delegatesStorage;
- (id)photoProxy;
@end
