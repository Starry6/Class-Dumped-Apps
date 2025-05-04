@interface AWECodeGenNoticeButtonModel : AWEBaseDataModel
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonSchema;
@property (nonatomic) NSInteger buttonColorStyle;
@property (nonatomic) NSInteger buttonType;
@property (nonatomic) AWECodeGenUserModel userModel;
- (int)buttonColorStyle;
- (id)buttonSchema;
- (void)setButtonSchema:;
- (void)setButtonColorStyle:;
- (int)buttonType;
- (void)setUserModel:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)userModel;
- (void)setButtonType:;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
