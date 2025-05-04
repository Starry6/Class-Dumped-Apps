@interface AWEShareSearchAIGCTask : AWEShareCommonTask
@property (nonatomic) @? searchIDsBlock;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)prepareWithChannel:inView:;
- (BOOL)enablePrepareWithChannel:inView:;
- (id)initWithContext:searchIDsBlock:enterFrom:;
- (void)setSearchIDsBlock:;
- (id)searchIDsBlock;
- (id)fetchShareInfo;
- (void)finishWithResult:error:;
- (void).cxx_destruct;
@end
