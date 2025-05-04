@interface AWEInnerPushCommonViewTitleItemModel : NSObject
@property (nonatomic) NSAttributedString attrString;
@property (nonatomic) NSString textString;
@property (nonatomic) UIColor textColor;
@property (nonatomic) AWEInnerPushLeftIconStaticDataModel iconModel;
@property (nonatomic) Q iconSizeEnum;
- (void)setTextString:;
- (void)setAttrString:;
- (id)textString;
- (id)attrString;
- (unsigned long long)iconSizeEnum;
- (void)setIconSizeEnum:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (void)setIconModel:;
- (id)textColor;
- (id)iconModel;
@end
