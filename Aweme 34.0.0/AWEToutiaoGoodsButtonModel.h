@interface AWEToutiaoGoodsButtonModel : MTLModel
@property (nonatomic) NSString microAppUrlString;
@property (nonatomic) NSString webUrlString;
@property (nonatomic) NSArray textArray;
@property (nonatomic) Q orderStatus;
@property (nonatomic) NSString SKUConfirmButtonText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)orderStatus;
- (void)setOrderStatus:;
- (void)setTextArray:;
- (id)microAppUrlString;
- (void)setMicroAppUrlString:;
- (id)webUrlString;
- (void)setWebUrlString:;
- (id)SKUConfirmButtonText;
- (void)setSKUConfirmButtonText:;
- (void).cxx_destruct;
- (id)textArray;
+ (id)JSONKeyPathsByPropertyKey;
@end
