@interface AWEECOMIMOrderRemitCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) NSDictionary remitBody;
@property (nonatomic) NSString title;
@property (nonatomic) Q moneyAmount;
@property (nonatomic) NSString moneyDesc;
@property (nonatomic) BOOL moneyInvalid;
@property (nonatomic) NSArray buttons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateModelWithData:encrypted:;
- (void)setRemitBody:;
- (id)remitBody;
- (void)setMoneyAmount:;
- (void)setMoneyDesc:;
- (void)setMoneyInvalid:;
- (unsigned long long)moneyAmount;
- (id)moneyDesc;
- (BOOL)moneyInvalid;
- (void)setButtons:;
- (id)buttons;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)careNoticeMsgType;
+ (Class)cardViewClass;
@end
