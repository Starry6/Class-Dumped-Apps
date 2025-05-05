@interface PAAssetIdentifierPool : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)drainPool;
- (void)invalidate;
- (void)addAssetIdentifiers:;
- (void)addAssetIdentifiers:accessEventCount:;
- (id)initWithMaxPoolSize:autoDrainInterval:bundleRecord:aggregateVisibilityStateMonitor:onQueue:delegate:;
@end
