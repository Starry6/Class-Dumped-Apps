@interface AWEAdSpecialWebViewController : AWEAdWebViewController
@property (nonatomic) Q category;
- (id)initWithAwemeModel:category:;
- (void)setWebViewClear;
- (void)trackStayTime;
- (id)init;
- (unsigned long long)category;
- (void)viewDidLoad;
- (void)setCategory:;
@end
