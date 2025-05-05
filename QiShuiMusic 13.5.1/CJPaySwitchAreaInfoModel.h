@interface CJPaySwitchAreaInfoModel : JSONModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString action;
@property (nonatomic) NSString bioType;
@property (nonatomic) NSString downgradeReason;
- (id)bioType;
- (id)downgradeReason;
- (void)setBioType:;
- (void)setDowngradeReason:;
- (id)desc;
- (void)setDesc:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
