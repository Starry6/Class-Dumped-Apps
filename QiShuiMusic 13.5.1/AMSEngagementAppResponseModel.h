@interface AMSEngagementAppResponseModel : NSObject
@property (nonatomic) NSDictionary definition;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSDate created;
@property (nonatomic) NSDictionary responseData;
- (id)created;
- (id)definition;
- (id)cacheKey;
- (id)exportObject;
- (id)responseData;
- (id)initWithCacheObject:;
- (void).cxx_destruct;
- (BOOL)matchesEvent:;
- (id)initWithData:cacheInfo:;
+ (BOOL)_shouldEvictDefinition:created:;
@end
