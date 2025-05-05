@interface EFResourcePool : NSObject
@property (nonatomic) Q uncreatedResourcesCount;
@property (nonatomic) EFQueue activeResources;
@property (nonatomic) NSMutableSet inactiveResources;
- (unsigned long long)uncreatedResourcesCount;
- (id)activeResources;
- (id)inactiveResources;
- (void)setUncreatedResourcesCount:;
- (void)releaseResource:;
- (void).cxx_destruct;
- (id)initWithCount:;
- (id)acquireResource;
@end
