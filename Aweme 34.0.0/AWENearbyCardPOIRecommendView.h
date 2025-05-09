@interface AWENearbyCardPOIRecommendView : UIView
@property (nonatomic) AWENearbyPOIContentModel model;
@property (nonatomic) YYLabel recommendLabel;
@property (nonatomic) UIView recommendContainer;
@property (nonatomic) q maxWidth;
@property (nonatomic) UIImageView awemeIcon;
@property (nonatomic) AWEGradientView iconBGView;
@property (nonatomic) UIColor labelColor;
@property (nonatomic) UIFont labelFont;
@property (nonatomic) NSAttributedString truncationToken;
- (void)setRecommendLabel:;
- (id)recommendLabel;
- (void)updateSubViewNoIconWithSring:Model:maxWidth:leftAndRightOffset:;
- (void)updateSubViewHaveIconWithSring:model:showIconStyleType:maxWidth:;
- (void)updateSubViewNoIconWithAttributedStr:Model:maxWidth:leftAndRightOffset:;
- (void)updateUIWithNOIconWithModel:maxWidth:leftAndRightOffset:;
- (void)updateUIWithStyleIconNoBG;
- (void)updateUIWithStyleIconHasBG;
- (void)updateUIWithStyleAllNoBG;
- (id)iconBGView;
- (id)awemeIcon;
- (id)recommendContainer;
- (void)setRecommendContainer:;
- (void)setAwemeIcon:;
- (void)setIconBGView:;
- (void)setModel:;
- (void)setLabelFont:;
- (id)labelFont;
- (long long)maxWidth;
- (id)model;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)labelColor;
- (void)setLabelColor:;
- (id)truncationToken;
- (void)setTruncationToken:;
@end
