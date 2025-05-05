@interface PIATracingService : NSObject
@property (nonatomic) PIABiMapTable engineMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addTrace:metrics:context:;
- (id)engineMap;
- (id)initService;
- (void)injectTracingBridgeWithContext:instance:;
- (void)setEngineMap:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
