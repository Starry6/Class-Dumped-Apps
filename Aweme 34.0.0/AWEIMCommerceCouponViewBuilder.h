@interface AWEIMCommerceCouponViewBuilder : NSObject
@property (nonatomic) AWEIMCommerceCouponContainerView builderView;
@property (nonatomic) BOOL remake;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildContainerView;
- (void)buildTitleLabel;
- (void)buildCommerceCouponView;
- (void)reBuildCommerceCouponView;
- (void)setUpBuilderView:;
- (void)setBuilderView:;
- (void)setCommerceCouponLabelPriority;
- (void)buildProcessButton;
- (void)buildIconImageView;
- (void)buildPriceIconLabel;
- (void)buildPriceLabel;
- (void)buildDiscountLabel;
- (void)buildSubtitleLabel;
- (void)buildLineLabel;
- (void)buildBottomLabel;
- (id)builderView;
- (void)setHuggingAndCompressionWithLabel:priority:;
- (void)setRemake:;
- (void).cxx_destruct;
- (BOOL)remake;
+ (id)contentSize;
@end
