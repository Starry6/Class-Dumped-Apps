@interface AWENaviClassTabModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString name;
@property (nonatomic) NSString icon;
@property (nonatomic) Q selectedCategoryIndex;
@property (nonatomic) BOOL selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setKey:;
- (id)icon;
- (id)key;
- (BOOL)isSelected;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setSelected:;
- (unsigned long long)selectedCategoryIndex;
- (void)setSelectedCategoryIndex:;
+ (id)JSONKeyPathsByPropertyKey;
@end
