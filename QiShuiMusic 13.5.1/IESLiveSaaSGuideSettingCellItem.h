@interface IESLiveSaaSGuideSettingCellItem : BDDynamicModel
@property (nonatomic) NSAttributedString tip;
@property (nonatomic) UIColor tipBackground;
@property (nonatomic) NSString title;
@property (nonatomic) NSString addText;
@property (nonatomic) NSString detail;
@property (nonatomic) NSAttributedString attrDetail;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL isGroupHeader;
@property (nonatomic) q style;
@property (nonatomic) @ initialValue;
@property (nonatomic) NSNumber switchValue;
@property (nonatomic) @? action;
@property (nonatomic) @? onDataChanged;
@property (nonatomic) @? onItemViewShow;
- (id)onDataChanged;
- (id)onItemViewShow;
- (void)setOnDataChanged:;
- (void)setOnItemViewShow:;
- (void)setTipBackground:;
- (id)tipBackground;
- (id)tip;
- (id)action;
- (void)setTip:;
- (void)setAction:;
- (void).cxx_destruct;
@end
