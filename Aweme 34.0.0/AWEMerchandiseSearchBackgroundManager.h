@interface AWEMerchandiseSearchBackgroundManager : NSObject
@property (nonatomic) AWEEcomSearchMerchandiseBackgroundView backgroundView;
@property (nonatomic) AWEEcomSearchMerchandiseBackgroundView resultHeaderBackgroundView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} resultBackgroundFrame;
@property (nonatomic) Q generalSearchTitleTheme;
@property (nonatomic) AWEGeneralSearchBackgroundModel backgroundModel;
@property (nonatomic) CAShapeLayer bottomAngleLayer;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) @? generalSearchTitleBGShowBlock;
@property (nonatomic) @? ecomSearchTitleBGChangeBlock;
@property (nonatomic) BOOL generalSearchTitleHidden;
@property (nonatomic) BOOL ignoreHostContentOffset;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) AWEGeneralSearchBackgroundModel currentSearchBackgroundModel;
@property (nonatomic) Q currentSearchTitleTheme;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (void)setBackgroundModel:;
- (id)resultHeaderBackgroundView;
- (void)updateGeneralSearchTitleTheme;
- (id)bottomAngleLayer;
- (void)setResultBackgroundFrame:;
- (id)searchBackgroundFrameOffset;
- (id)ecomSearchTitleBGChangeBlock;
- (BOOL)generalSearchTitleHidden;
- (void)setGeneralSearchTitleTheme:;
- (void)setGeneralSearchTitleHidden:;
- (id)generalSearchTitleBGShowBlock;
- (void)handleForceSearchTitleHidden:;
- (id)resultBackgroundFrame;
- (void)updateBottomAngleLayer;
- (id)generalResultBackgroundView;
- (id)generalResultHeaderBackgroundView;
- (void)updateResultBackgroundFrame:;
- (void)hostContentOffset:;
- (void)handleForceSearchTitleHidden:isFromSaas:;
- (void)setGeneralSearchTitleBGShowBlock:;
- (void)setEcomSearchTitleBGChangeBlock:;
- (unsigned long long)generalSearchTitleTheme;
- (BOOL)ignoreHostContentOffset;
- (void)setIgnoreHostContentOffset:;
- (id)currentSearchBackgroundModel;
- (void)setCurrentSearchBackgroundModel:;
- (unsigned long long)currentSearchTitleTheme;
- (void)setCurrentSearchTitleTheme:;
- (void)setResultHeaderBackgroundView:;
- (void)setBottomAngleLayer:;
- (void)setContentOffset:;
- (id)contentOffset;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)backgroundModel;
+ (id)getDefaultEcomSearchBackgroundModel;
@end
