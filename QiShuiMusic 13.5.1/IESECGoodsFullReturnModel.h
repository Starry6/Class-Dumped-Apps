@interface IESECGoodsFullReturnModel : MTLModel
@property (nonatomic) IESECURLModel fullReturnBGImage;
@property (nonatomic) IESECURLModel eventIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber transactionThreshold;
@property (nonatomic) NSNumber userTotalTransaction;
@property (nonatomic) Q eventStatus;
@property (nonatomic) NSString descSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descSchema;
- (id)eventIcon;
- (id)fullReturnBGImage;
- (void)setDescSchema:;
- (void)setEventIcon:;
- (void)setFullReturnBGImage:;
- (void)setTransactionThreshold:;
- (void)setUserTotalTransaction:;
- (id)transactionThreshold;
- (id)userTotalTransaction;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setEventStatus:;
- (unsigned long long)eventStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
