@interface AWEUltraCreationPageHandlerWrapper : NSObject
@property (nonatomic) AWEUltraCreationPageHandler handler;
@property (nonatomic) NSString requestId;
@property (nonatomic) q curPage;
- (long long)curPage;
- (id)initWithConfig:finishResultCallback:;
- (void)configInitialToken:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)setRequestId:;
- (id)requestId;
- (id)copyWithZone:;
@end
