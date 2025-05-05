@interface TLKIconsView : TLKStackView
@property (nonatomic) NSMutableArray imageViews;
@property (nonatomic) Q prominence;
@property (nonatomic) UIFont symbolFont;
- (id)init;
- (void)setProminence:;
- (unsigned long long)prominence;
- (void).cxx_destruct;
- (id)symbolFont;
- (void)setImageViews:;
- (id)imageViews;
- (void)setSymbolFont:;
- (void)updateIcons:;
@end
