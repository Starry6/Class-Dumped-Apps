@interface AWESharkContainerLoadContext : NSObject
@property (nonatomic) AWESharkLoadResult result;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString loadType;
@property (nonatomic) NSString cardID;
@property (nonatomic) BOOL reuse;
@property (nonatomic) double loadStartedTs;
@property (nonatomic) double loadFinishedTs;
- (BOOL)reuse;
- (void)setReuse:;
- (void)setLoadType:;
- (void)setLoadFinishedTs:;
- (void)setLoadStartedTs:;
- (double)loadFinishedTs;
- (double)loadStartedTs;
- (id)schema;
- (void)setResult:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)result;
- (id)loadType;
- (id)cardID;
- (void)setCardID:;
@end
