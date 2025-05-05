@interface IESECGoodsDetailSkuSpecInfo : MTLModel
@property (nonatomic) NSString specDefaultName;
@property (nonatomic) NSArray specIDs;
@property (nonatomic) NSArray specNames;
@property (nonatomic) NSString selectSpecId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specIDs;
- (id)specDefaultName;
- (id)selectSpecId;
- (void)setSelectSpecId:;
- (void)setSpecDefaultName:;
- (void)setSpecIDs:;
- (void)setSpecNames:;
- (id)specNames;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
