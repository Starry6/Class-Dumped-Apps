@interface IESECGoodsTaxDescribeModel : MTLModel
@property (nonatomic) NSString taxTitle;
@property (nonatomic) NSString taxDescribe;
@property (nonatomic) NSArray taxDescribeItems;
@property (nonatomic) NSString hasTax;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTaxDescribe:;
- (id)hasTax;
- (void)setHasTax:;
- (void)setTaxDescribeItems:;
- (void)setTaxTitle:;
- (id)taxDescribe;
- (id)taxDescribeItems;
- (id)taxTitle;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
