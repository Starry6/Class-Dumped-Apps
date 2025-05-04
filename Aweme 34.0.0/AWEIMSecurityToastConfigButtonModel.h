@interface AWEIMSecurityToastConfigButtonModel : AWEBaseApiModel
@property (nonatomic) q buttonType;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray checkbox;
@property (nonatomic) NSString reportValue;
@property (nonatomic) NSArray actions;
@property (nonatomic) q nextToastIndex;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL requireOptionSelected;
- (BOOL)requireOptionSelected;
- (id)reportValue;
- (id)checkbox;
- (void)setCheckbox:;
- (void)setReportValue:;
- (long long)nextToastIndex;
- (void)setRequireOptionSelected:;
- (void)setNextToastIndex:;
- (long long)buttonType;
- (void)setText:;
- (id)actions;
- (id)text;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setActions:;
- (BOOL)highlight;
- (void)setHighlight:;
+ (id)checkboxJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
