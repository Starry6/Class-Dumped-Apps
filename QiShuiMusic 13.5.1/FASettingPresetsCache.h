@interface FASettingPresetsCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)load:;
- (id)_cacheURL;
- (id)_cacheURLWithError:;
- (id)_fetchData:;
- (id)_createCacheFile;
- (id)invalidate;
- (id)loadForURL:;
- (id)updateWithPresets:requestURL:;
- (id)_cacheDirectoryURLWithError:;
+ (id)cacheQueue;
@end
