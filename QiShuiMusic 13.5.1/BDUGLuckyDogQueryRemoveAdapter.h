@interface BDUGLuckyDogQueryRemoveAdapter : NSObject
@property (nonatomic) NSSet removeQuerySet;
@property (nonatomic) BOOL needUpdateRemoveQuerySet;
@property (nonatomic) NSMutableArray extraProviders;
@property (nonatomic) BOOL enableQueryRemove;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__removeQuerySetForURLString:;
- (void)addExtraQueryProvider:;
- (BOOL)enableQueryRemove;
- (id)extraProviders;
- (BOOL)needUpdateRemoveQuerySet;
- (id)removeQuerySet;
- (void)setEnableQueryRemove:;
- (void)setExtraProviders:;
- (void)setNeedUpdateRemoveQuerySet:;
- (void)setRemoveQuerySet:;
- (void)updateRemoveQuerySet;
- (id)urlStringAfterQueryRemoveWithURLString:;
- (id)init;
- (void).cxx_destruct;
+ (void)onAppSettingsUpdated;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
