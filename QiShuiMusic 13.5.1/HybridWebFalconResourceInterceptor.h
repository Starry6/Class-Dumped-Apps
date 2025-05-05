@interface HybridWebFalconResourceInterceptor : NSObject
@property (nonatomic) NSMapTable weakObjHolder;
@property (nonatomic) NSMutableDictionary requestIDIntercepted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extractWebUUIDFromUA:;
- (id)falconMetaDataForURLRequest:;
- (unsigned long long)falconPriority;
- (id)getIdStringForRequest:;
- (void)reportWithContainer:resourceProvider:request:;
- (id)requestIDIntercepted;
- (void)setRequestIDIntercepted:;
- (void)setWeakObjHolder:;
- (id)shouldInterceptFor:;
- (BOOL)shouldInterceptForRequest:;
- (id)tryFindContextWithRequest:;
- (id)weakObjHolder;
- (void).cxx_destruct;
+ (void)registerInterceptorIfNeeded;
+ (void)removeContextForKey:;
+ (void)setWebView:forKey:;
+ (id)shareInstance;
@end
