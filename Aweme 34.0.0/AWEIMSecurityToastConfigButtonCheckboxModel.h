@interface AWEIMSecurityToastConfigButtonCheckboxModel : AWEBaseApiModel
@property (nonatomic) BOOL selectValue;
@property (nonatomic) q nextToast;
@property (nonatomic) NSString value;
@property (nonatomic) NSString reportValue;
@property (nonatomic) q nextToastIndex;
- (BOOL)selectValue;
- (void)setSelectValue:;
- (id)reportValue;
- (void)setNextToast:;
- (long long)nextToast;
- (void)setReportValue:;
- (long long)nextToastIndex;
- (void)setNextToastIndex:;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setSelected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
