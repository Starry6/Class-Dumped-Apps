@interface AVAssetWriterInputMediaDataRequester : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> requestQueue;
@property (nonatomic) <AVAssetWriterInputMediaDataRequesterDelegate> delegate;
- (id)init;
- (void)dealloc;
- (id)requestQueue;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithRequestQueue:requestBlock:;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)requestMediaDataIfNecessary;
@end
