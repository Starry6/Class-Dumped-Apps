@interface AWEPackLoaderMeta : NSObject
@property (nonatomic) NSString loaderID;
@property (nonatomic) # loader;
@property (nonatomic) NSMutableSet dependingLoaderIDs;
@property (nonatomic) NSMutableSet dependedLoaderIDs;
@property (nonatomic) BOOL isCore;
- (id)loaderID;
- (id)initWithLoader:isCore:;
- (void)setLoaderID:;
- (id)dependingLoaderIDs;
- (void)setDependingLoaderIDs:;
- (id)dependedLoaderIDs;
- (void)setDependedLoaderIDs:;
- (void)setIsCore:;
- (void).cxx_destruct;
- (Class)loader;
- (void)setLoader:;
- (BOOL)isCore;
@end
