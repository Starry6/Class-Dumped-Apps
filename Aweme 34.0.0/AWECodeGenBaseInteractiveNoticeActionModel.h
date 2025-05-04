@interface AWECodeGenBaseInteractiveNoticeActionModel : AWEBaseDataModel
@property (nonatomic) NSInteger actionType;
@property (nonatomic) NSString text;
- (int)actionType;
- (void)setActionType:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
