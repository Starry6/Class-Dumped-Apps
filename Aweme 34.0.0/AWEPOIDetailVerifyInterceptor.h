@interface AWEPOIDetailVerifyInterceptor : NSObject
@property (nonatomic) NSMutableArray recentRouterURLs;
@property (nonatomic) NSString latestRouterURLs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)routerDidBeginTransferWithURLString:;
- (id)recentRouterURLs;
- (void)addNewRouterURL:;
- (id)latestRouterURLs;
- (void)setRecentRouterURLs:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInterceptor;
@end
