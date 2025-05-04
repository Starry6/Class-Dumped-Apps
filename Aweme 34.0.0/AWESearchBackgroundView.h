@interface AWESearchBackgroundView : UIView
@property (nonatomic) AWESearchBackgroundModel backgroundModel;
@property (nonatomic) BOOL hasBackgroundContent;
@property (nonatomic) BOOL fillImageView;
@property (nonatomic) @? updateLayerBlock;
- (void)themeDidChange:;
- (void)configUIWithModel:;
- (void)setFillImageView:;
- (id)updateLayerBlock;
- (void)setBackgroundModel:;
- (BOOL)fillImageView;
- (void)setUpdateLayerBlock:;
- (void)forceUpdateWithModel:;
- (void)dealloc;
- (void)addObserver;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)hasBackgroundContent;
- (void)updateWithModel:;
- (id)backgroundModel;
@end
