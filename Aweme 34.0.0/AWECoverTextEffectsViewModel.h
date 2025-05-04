@interface AWECoverTextEffectsViewModel : NSObject
@property (nonatomic) NSArray cellModels;
@property (nonatomic) NSArray fonts;
@property (nonatomic) double fontScale;
- (void)setCellModels:;
- (id)cellModels;
- (void)startFetchCoverTextList:;
- (BOOL)enableLoadingOptimizeWhenNoNetworkWithTextResponse:fontResponse:;
- (void)p_generateCellModelsWithEffectList:;
- (id)fonts;
- (void)setFonts:;
- (id)init;
- (void).cxx_destruct;
- (double)fontScale;
- (void)setFontScale:;
@end
