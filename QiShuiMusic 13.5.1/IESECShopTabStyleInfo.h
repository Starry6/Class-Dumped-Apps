@interface IESECShopTabStyleInfo : MTLModel
@property (nonatomic) IESECURLModel tabIcon;
@property (nonatomic) IESECURLModel selectedTabIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabIcon;
- (id)selectedTabIcon;
- (void)setSelectedTabIcon:;
- (void)setTabIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
