@interface AMSEngagementAppEventFilterModel : NSObject
@property (nonatomic) NSDictionary definition;
@property (nonatomic) BOOL allowsResponse;
@property (nonatomic) Q components;
- (id)definition;
- (id)exportObject;
- (unsigned long long)components;
- (id)init;
- (BOOL)allowsResponse;
- (id)initWithDefinition:;
- (id)initWithCacheObject:;
- (void).cxx_destruct;
- (BOOL)matchesEvent:;
+ (BOOL)matchEvent:toFilter:;
@end
