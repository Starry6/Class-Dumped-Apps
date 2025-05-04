@interface AWEFeedDislikeFilterManager : NSObject
@property (nonatomic) NSMutableArray cachedfilters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dislikeWithModel:referString:;
- (id)filterArrayWithModels:;
- (void)revertDislikeWithModel:referString:;
- (void)submitDislikeReasons:awemeModel:;
- (void)registerFilters;
- (id)cachedfilters;
- (id)filterClassArray;
- (void)setCachedfilters:;
- (id)init;
- (void)addFilter:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (BOOL)enabled;
@end
