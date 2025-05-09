@interface AWEPublishTagRecommendStyleInfo : NSObject
@property (nonatomic) NSString namePrefix;
@property (nonatomic) UIFont nameFont;
@property (nonatomic) NSString nameColor;
@property (nonatomic) double nameLabelHeight;
@property (nonatomic) double tagImageViewHeigth;
@property (nonatomic) double tagImageViewWidth;
@property (nonatomic) double hotspotTagImageViewHeight;
@property (nonatomic) double hotspotTagImageViewWidth;
@property (nonatomic) double tagImageViewLeftPadding;
@property (nonatomic) NSString tagHistoryIconName;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) {UIEdgeInsets=dddd} collectionViewContentInsets;
@property (nonatomic) NSString itemBackgroundColorName;
@property (nonatomic) BOOL hiddenSeparateLine;
@property (nonatomic) BOOL hiddenGradientView;
- (double)nameLabelHeight;
- (void)setNameLabelHeight:;
- (double)tagImageViewHeigth;
- (void)setTagImageViewHeigth:;
- (double)tagImageViewWidth;
- (void)setTagImageViewWidth:;
- (double)hotspotTagImageViewHeight;
- (void)setHotspotTagImageViewHeight:;
- (double)hotspotTagImageViewWidth;
- (void)setHotspotTagImageViewWidth:;
- (double)tagImageViewLeftPadding;
- (void)setTagImageViewLeftPadding:;
- (id)tagHistoryIconName;
- (void)setTagHistoryIconName:;
- (void)setCollectionViewContentInsets:;
- (id)itemBackgroundColorName;
- (void)setItemBackgroundColorName:;
- (BOOL)hiddenSeparateLine;
- (void)setHiddenSeparateLine:;
- (BOOL)hiddenGradientView;
- (void)setHiddenGradientView:;
- (void)setNamePrefix:;
- (id)namePrefix;
- (void).cxx_destruct;
- (void)setItemCornerRadius:;
- (double)itemCornerRadius;
- (id)nameFont;
- (double)itemHeight;
- (void)setNameFont:;
- (id)collectionViewContentInsets;
- (id)nameColor;
- (void)setNameColor:;
- (void)setItemHeight:;
@end
