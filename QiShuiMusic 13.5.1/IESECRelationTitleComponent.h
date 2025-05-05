@interface IESECRelationTitleComponent : UIView
@property (nonatomic) IESECShopGoodsTitleLabel titleLabel;
- (void)p_setupUI;
- (void)updateUIWithModel:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (double)titleHeightWithModel:componentWidth:lineHeight:numberOfLines:titleLineSpace:tagHeight:lineBreakMode:;
+ (double)titleNewHeightWithModel:componentWidth:lineHeight:numberOfLines:titleLineSpace:tagHeight:lineBreakMode:fontSize:fontWeight:;
+ (id)titleNewWithHeight:padding:numberOfLines:titleHeight:tagHeight:titleLineSpace:lineBreakMode:fontSize:fontWeight:;
+ (id)titleWithLineHeight:padding:numberOfLines:titleHeight:tagHeight:titleLineSpace:lineBreakMode:fontWeight:;
+ (id)titleWithNumberOfLines:lineBreakMode:;
+ (id)titleWithTitleHeight:numberOfLines:tagHeight:lineBreakMode:;
+ (id)titleWithTitleHeight:tagHeight:lineBreakMode:;
+ (id)title;
@end
