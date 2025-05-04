@interface AWEIMShareBackgroundPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? coverTappedActionBlock;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString skey;
@property (nonatomic) NSString url;
@property (nonatomic) BOOL rip;
- (id)skey;
- (void)setSkey:;
- (void)setRip:;
- (void)setCoverTappedActionBlock:;
- (id)coverTappedActionBlock;
- (void)setUrl:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (BOOL)rip;
@end
