@interface SSLookupResponse : NSObject
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) SSMetricsPageEvent metricsPageEvent;
@property (nonatomic) NSArray allItems;
@property (nonatomic) SSMetricsConfiguration metricsConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)allItems;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)responseDictionary;
- (id)initWithResponseDictionary:;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)itemForKey:;
- (id)valueForProperty:;
- (id)appStoreURLWithReason:initialIndex:;
- (id)metricsPageEvent;
- (void)_enumerateItemsWithBlock:;
- (id)initWithLocationResponseDictionary:;
- (id)metricsConfiguration;
- (void)_setMetricsPageEvent:;
@end
