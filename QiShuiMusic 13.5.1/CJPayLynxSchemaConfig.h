@interface CJPayLynxSchemaConfig : JSONModel
@property (nonatomic) NSString myBankCard;
@property (nonatomic) NSString retainPopup;
@property (nonatomic) CJPayKeepDialogStandard keepDialogStandardNew;
@property (nonatomic) NSString loginInfo;
- (void)setRetainPopup:;
- (id)keepDialogStandardNew;
- (id)loginInfo;
- (id)myBankCard;
- (id)retainPopup;
- (void)setKeepDialogStandardNew:;
- (void)setLoginInfo:;
- (void)setMyBankCard:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
