@interface AWEEcomSearchPriceUpperAreaView : UIView
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UILabel salesLabel;
@property (nonatomic) AWESearchMerchandiseModel merchandise;
- (id)merchandise;
- (void)setSalesLabel:;
- (id)salesLabel;
- (void)configWithMerchandise:;
- (void)setMerchandise:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)infoLabel;
- (void)setInfoLabel:;
+ (BOOL)hasPriceUpperArea:;
+ (double)priceUpperAreaHeight;
@end
