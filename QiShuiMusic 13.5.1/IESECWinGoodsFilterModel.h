@interface IESECWinGoodsFilterModel : MTLModel
@property (nonatomic) Q filterType;
@property (nonatomic) NSString filterName;
@property (nonatomic) BOOL isChecked;
@property (nonatomic) NSString toolTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setToolTips:;
- (id)toolTips;
- (void)setFilterType:;
- (unsigned long long)filterType;
- (void).cxx_destruct;
- (id)filterName;
- (BOOL)isChecked;
- (void)setFilterName:;
- (void)setIsChecked:;
+ (id)JSONKeyPathsByPropertyKey;
@end
