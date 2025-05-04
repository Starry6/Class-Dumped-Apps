@interface AWEIMImageWaterFallCell : UICollectionViewCell
@property (nonatomic) UIImageView mainImageView;
@property (nonatomic) CAShapeLayer dashBorderLayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithItem:;
- (id)mainImageView;
- (void)setMainImageView:;
- (void)p_setupBaseUI;
- (void)p_updateMainImageUIWithItem:;
- (id)dashBorderLayer;
- (void)drawDottedLineWithRect:width:dashPattern:cornerRadius:color:;
- (void)setDashBorderLayer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
@end
