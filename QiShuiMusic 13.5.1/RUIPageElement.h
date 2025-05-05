@interface RUIPageElement : RUIElement
@property (nonatomic) RUIPage page;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL loading;
- (id)page;
- (BOOL)isLoading;
- (void)setLoading:;
- (void)setPage:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)staticValues;
@end
