@interface AWEIMCommerceCouponViewBuilder : NSObject
@property (nonatomic) AWEIMCommerceCouponContainerView builderView;
@property (nonatomic) BOOL remake;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildPriceLabel;
- (void)buildTitleLabel;
- (void)setBuilderView:;
- (void)buildBottomLabel;
- (void)buildCommerceCouponView;
- (void)buildContainerView;
- (void)buildDiscountLabel;
- (void)buildIconImageView;
- (void)buildLineLabel;
- (void)buildPriceIconLabel;
- (void)buildProcessButton;
- (void)buildSubtitleLabel;
- (id)builderView;
- (void)reBuildCommerceCouponView;
- (void)setCommerceCouponLabelPriority;
- (void)setHuggingAndCompressionWithLabel:priority:;
- (void)setRemake:;
- (void)setUpBuilderView:;
- (void).cxx_destruct;
- (BOOL)remake;
+ (id)contentSize;
@end
