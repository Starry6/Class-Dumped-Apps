@interface AWEPOITempoResourceProvider : NSObject
@property (nonatomic) YYCache cache;
@property (nonatomic) NSMutableDictionary urlToCallbacks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchDataWith:completionHandler:;
- (void)checkAndCreateDirectory:;
- (id)urlToCallbacks;
- (void)setUrlToCallbacks:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
@end
