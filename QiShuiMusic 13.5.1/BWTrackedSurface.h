@interface BWTrackedSurface : NSObject
@property (nonatomic) ^{__IOSurface=} surface;
@property (nonatomic) @? handler;
@property (nonatomic) NSInteger clientUseCount;
@property (nonatomic) BOOL owningPixelBufferDeallocated;
- (id)surface;
- (void)dealloc;
- (id)handler;
- (id)initWithSurface:handler:;
- (int)clientUseCount;
- (void)setClientUseCount:;
- (BOOL)owningPixelBufferDeallocated;
- (void)setOwningPixelBufferDeallocated:;
@end
