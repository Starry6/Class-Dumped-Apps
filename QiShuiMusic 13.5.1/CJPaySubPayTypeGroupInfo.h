@interface CJPaySubPayTypeGroupInfo : JSONModel
@property (nonatomic) NSString groupType;
@property (nonatomic) NSString groupTitle;
@property (nonatomic) NSString creditPayDesc;
@property (nonatomic) q displayNewBankCardCount;
@property (nonatomic) NSString addBankCardFoldDesc;
- (id)addBankCardFoldDesc;
- (id)creditPayDesc;
- (long long)displayNewBankCardCount;
- (void)setAddBankCardFoldDesc:;
- (void)setCreditPayDesc:;
- (void)setDisplayNewBankCardCount:;
- (id)groupType;
- (void)setGroupTitle:;
- (void)setGroupType:;
- (void).cxx_destruct;
- (id)groupTitle;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
