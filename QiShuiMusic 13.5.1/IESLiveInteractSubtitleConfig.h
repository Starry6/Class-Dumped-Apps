@interface IESLiveInteractSubtitleConfig : NSObject
@property (nonatomic) BOOL firstSetup;
@property (nonatomic) double subtitleViewWidth;
@property (nonatomic) double subtitleViewHeight;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginTop;
@property (nonatomic) UIColor subtitleBackgroundColor;
@property (nonatomic) double subtitleCollectionViewHeight;
@property (nonatomic) double subtitleCellHeight;
@property (nonatomic) double subtitleLabelWidth;
@property (nonatomic) double subtitleLabelHeight;
@property (nonatomic) double nameLabelWidth;
@property (nonatomic) double nameLabelHeight;
@property (nonatomic) UIFont nameLabelFont;
@property (nonatomic) UIFont subtitleLabelFont;
@property (nonatomic) q style;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) BOOL locationModified;
@property (nonatomic) BOOL disableDrag;
@property (nonatomic) BOOL disableDelete;
@property (nonatomic) BOOL previewNeedPress;
- (double)nameLabelHeight;
- (void)setDisableDrag:;
- (BOOL)disableDelete;
- (BOOL)disableDrag;
- (BOOL)firstSetup;
- (BOOL)locationModified;
- (id)nameLabelFont;
- (double)nameLabelWidth;
- (BOOL)previewNeedPress;
- (void)setDisableDelete:;
- (void)setFirstSetup:;
- (void)setLocationModified:;
- (void)setNameLabelFont:;
- (void)setNameLabelHeight:;
- (void)setNameLabelWidth:;
- (void)setPreviewNeedPress:;
- (void)setSubtitleBackgroundColor:;
- (void)setSubtitleCellHeight:;
- (void)setSubtitleCollectionViewHeight:;
- (void)setSubtitleLabelFont:;
- (void)setSubtitleLabelHeight:;
- (void)setSubtitleLabelWidth:;
- (void)setSubtitleViewHeight:;
- (void)setSubtitleViewWidth:;
- (void)setUpDefaultData;
- (void)setUpDefaultStyle;
- (id)subtitleBackgroundColor;
- (double)subtitleCellHeight;
- (double)subtitleCollectionViewHeight;
- (double)subtitleLabelHeight;
- (double)subtitleLabelWidth;
- (double)subtitleViewHeight;
- (double)subtitleViewWidth;
- (void)setX:;
- (void)setY:;
- (double)y;
- (void)setStyle:;
- (double)x;
- (void).cxx_destruct;
- (long long)style;
- (double)marginTop;
- (void)setMarginTop:;
- (id)subtitleLabelFont;
- (id)initWithStyleType:;
- (double)marginLeft;
- (void)setMarginLeft:;
- (void)updateWithStyle:;
@end
