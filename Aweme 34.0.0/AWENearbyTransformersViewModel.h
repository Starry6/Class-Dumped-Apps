@interface AWENearbyTransformersViewModel : AWEBaseViewModel
@property (nonatomic) double thumbnailProcess;
@property (nonatomic) BOOL inFeed;
@property (nonatomic) BOOL shouldShowBackground;
@property (nonatomic) NSArray transformers;
@property (nonatomic) BOOL shouldDisplay;
- (void)setInFeed:;
- (void)trackTransformersShow;
- (double)thumbnailProcess;
- (BOOL)shouldShowColorTransformerTab;
- (void)setThumbnailProcess:;
- (void)setShouldShowBackground:;
- (BOOL)shouldShowBackground;
- (BOOL)inFeed;
- (void)trackerClickWithTransformer:;
- (void)trackTransformersShowWithTransformer:;
- (void)bindItemsView:withViewModel:;
- (void)trackNearbyTransformerTypeTimor:event:;
- (id)transformers;
- (void).cxx_destruct;
- (long long)getStyle;
- (BOOL)shouldDisplay;
- (void)setTransformers:;
@end
