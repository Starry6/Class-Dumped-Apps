@interface AWEMVClientForceInsertContext : NSObject
@property (nonatomic) NSArray originalAwemeList;
@property (nonatomic) AWEMVDataRequestContext requestContext;
@property (nonatomic) BOOL isScreenContainsFirstRenderCache;
@property (nonatomic) BOOL isFromFirstRenderCache;
@property (nonatomic) BOOL isReplaceModeOfFirstRenderCache;
- (BOOL)isScreenContainsFirstRenderCache;
- (BOOL)isReplaceModeOfFirstRenderCache;
- (BOOL)isFromFirstRenderCache;
- (id)originalAwemeList;
- (void)setIsFromFirstRenderCache:;
- (void)setIsScreenContainsFirstRenderCache:;
- (id)initWithAwemeList:;
- (void)setOriginalAwemeList:;
- (void)setIsReplaceModeOfFirstRenderCache:;
- (id)requestContext;
- (void).cxx_destruct;
- (void)setRequestContext:;
@end
