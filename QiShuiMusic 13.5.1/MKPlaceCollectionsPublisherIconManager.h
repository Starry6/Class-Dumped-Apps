@interface MKPlaceCollectionsPublisherIconManager : NSObject
@property (nonatomic) NSCache publisherIconCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
- (void)iconForPublisherNamed:usingId:contentScale:onCompletion:;
- (id)iconForPublisherNamed:usingId:usingContentScale:usingSizeGroup:isNightMode:;
- (id)_iconForPublisherNamed:usingId:usingContentScale:usingSizeGroup:isNightMode:;
- (id)publisherIconCache;
- (void)setPublisherIconCache:;
+ (id)sharedInstance;
@end
