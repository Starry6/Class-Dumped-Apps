@interface AWENearbyTransformerPreloadResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) q preloadType;
@property (nonatomic) NSString errMsg;
@property (nonatomic) double startPreloadTs;
@property (nonatomic) double endPreloadTs;
@property (nonatomic) NSString schema;
@property (nonatomic) q scene;
- (void)setPreloadType:;
- (id)errMsg;
- (void)setErrMsg:;
- (double)startPreloadTs;
- (void)setStartPreloadTs:;
- (double)endPreloadTs;
- (void)setEndPreloadTs:;
- (id)schema;
- (void)setScene:;
- (void)setSchema:;
- (long long)scene;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
- (long long)preloadType;
@end
