@interface PIAContextService : NSObject
@property (nonatomic) PIABiMapTable contextMap;
@property (nonatomic) YYMemoryCache contextCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)releaseContext:;
- (id)contextMap;
- (id)createPIAContextWithInstance:URL:;
- (id)createPIAContextWithURL:;
- (id)getPIAContextWithInstance:;
- (id)initService;
- (void)releaseContextForKey:;
- (void)setContextMap:;
- (void).cxx_destruct;
- (id)contextCache;
- (void)setContextCache:;
+ (void)executePrepareServiceTask;
@end
