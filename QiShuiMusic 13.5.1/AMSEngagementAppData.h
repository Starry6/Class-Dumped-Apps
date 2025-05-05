@interface AMSEngagementAppData : NSObject
@property (nonatomic) NSArray cachedResponses;
@property (nonatomic) NSArray eventFilters;
@property (nonatomic) NSString identifier;
- (id)exportObject;
- (id)identifier;
- (id)initWithIdentifier:cacheObject:;
- (id)eventFilters;
- (void)setCachedResponses:;
- (void).cxx_destruct;
- (void)setEventFilters:;
- (id)cachedResponses;
@end
