@interface DAVResource_OC : NSObject
@property (nonatomic) {shared_ptr<davinci::resource::DAVResource>=^{DAVResource}^{__shared_weak_count}} internalResource;
@property (nonatomic) NSString resourceFile;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSArray dependResource;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) NSDictionary extraMap;
- (id)dependResource;
- (id)extraMap;
- (id)initWithCPPValue:;
- (id)initWithURS:;
- (id)resourceFile;
- (id)resourceId;
- (void)setDependResource:;
- (void)setInternalResource:;
- (void)setResourceFile:;
- (BOOL)isFromCache;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)internalResource;
@end
