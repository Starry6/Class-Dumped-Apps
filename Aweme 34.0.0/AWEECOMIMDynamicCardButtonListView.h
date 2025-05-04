@interface AWEECOMIMDynamicCardButtonListView : AWEECOMIMDynamicCardButtonGroupView
@property (nonatomic) UIView bkgView;
@property (nonatomic) NSMutableDictionary customActionModelDict;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)onButtonClick:;
- (void)setCustomActionModelDict:;
- (id)customActionModelDict;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (double)heightWithElementModel:maxSize:;
@end
