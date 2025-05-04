@interface AWEIMShareDSPMusicContentPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSURL coverURL;
@property (nonatomic) Q status;
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) @? tapPlayButtonActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)setTapPlayButtonActionBlock:;
- (id)tapPlayButtonActionBlock;
- (void)setStatus:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)title;
- (void)setTitle:;
- (id)coverURL;
- (void)setCoverURL:;
@end
