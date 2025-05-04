@interface AWEInnerPushCommonViewTextActionAreaModel : AWEInnerPushCommonViewRightActionAreaModel
@property (nonatomic) NSString actionText;
@property (nonatomic) UIColor textColor;
@property (nonatomic) Q color;
@property (nonatomic) AWEInnerPushLeftIconStaticDataModel iconModel;
@property (nonatomic) Q order;
@property (nonatomic) @? tapActionButtonBlock;
@property (nonatomic) Q emphasize;
- (void)setTapActionButtonBlock:;
- (void)setEmphasize:;
- (id)tapActionButtonBlock;
- (unsigned long long)emphasize;
- (unsigned long long)order;
- (unsigned long long)color;
- (void)setTextColor:;
- (void)setColor:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setOrder:;
- (void)setIconModel:;
- (id)textColor;
- (id)iconModel;
- (id)actionText;
- (void)setActionText:;
@end
