@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig_ButtonBody : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString reportValue;
@property (nonatomic) NSString nextConfigID;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL requireOptionSelected;
@property (nonatomic) NSArray actions;
- (id)nextConfigID;
- (BOOL)requireOptionSelected;
- (id)reportValue;
- (void)setReportValue:;
- (void)setNextConfigID:;
- (void)setRequireOptionSelected:;
- (id)actions;
- (void).cxx_destruct;
- (id)title;
- (void)setActions:;
- (void)setTitle:;
- (BOOL)highlight;
- (void)setHighlight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
