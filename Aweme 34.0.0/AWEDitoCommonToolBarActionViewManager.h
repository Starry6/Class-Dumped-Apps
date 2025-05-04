@interface AWEDitoCommonToolBarActionViewManager : NSObject
@property (nonatomic) AWEDitoCustomDataParserImpl colorParser;
- (id)duxImageActionWithModel:clickBlock:;
- (id)duxTextActionWithModel:clickBlock:;
- (id)duxTopImageBottomTextActionWithModel:clickBlock:;
- (void)configActionAccessibility:withItem:;
- (id)accessibilityStringWithIconTypeString:;
- (id)colorParser;
- (id)imageViewWithModel:;
- (void)configDitoStyle:toView:;
- (double)calculatePaddingWithWidth:;
- (long long)duxWeightWithString:;
- (id)duxImageNameWithString:;
- (id)getDUXActionWithItemModel:clickBlock:;
- (void)setColorParser:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)getColorFromString:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
