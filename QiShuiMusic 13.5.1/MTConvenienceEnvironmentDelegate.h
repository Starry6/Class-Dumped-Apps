@interface MTConvenienceEnvironmentDelegate : MTEnvironmentStoreDelegate
@property (nonatomic) @? _pageURLBlock;
@property (nonatomic) @? _resourceRevNumBlock;
@property (nonatomic) @? _hostAppBlock;
- (id)init;
- (id)pageUrl;
- (void).cxx_destruct;
- (id)hostApp;
- (id)resourceRevNum;
- (id)_hostAppBlock;
- (id)initWithPageURLBlock:resourceRevNumBlock:hostAppBlock:;
- (id)_pageURLBlock;
- (void)set_pageURLBlock:;
- (id)_resourceRevNumBlock;
- (void)set_resourceRevNumBlock:;
- (void)set_hostAppBlock:;
@end
