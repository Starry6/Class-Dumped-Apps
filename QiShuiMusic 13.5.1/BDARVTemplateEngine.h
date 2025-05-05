@interface BDARVTemplateEngine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadTemplateWithUrl:onComplete:;
- (id)_cacheWithURL:;
- (id)_innerCacheWithURL:;
- (void)clearTemplateData;
- (BOOL)exisTemplateForURL:disableCache:;
- (id)geckoData:;
- (id)packageVersion;
- (void)requestTemplateWithURL:completionBlock:;
- (void)synTemplateData:url:;
- (id)templateWithURL:;
- (id)init;
+ (id)sharedManager;
@end
