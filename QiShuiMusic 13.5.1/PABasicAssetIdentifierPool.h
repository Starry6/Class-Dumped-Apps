@interface PABasicAssetIdentifierPool : NSObject
@property (nonatomic) q visibilityState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (long long)visibilityState;
- (void)setVisibilityState:;
- (void).cxx_destruct;
- (void)drainPool;
- (void)invalidate;
- (void)addAssetIdentifiers:;
- (void)addAssetIdentifiers:accessEventCount:;
- (id)initWithMaxPoolSize:autoDrainInterval:onQueue:delegate:;
@end
