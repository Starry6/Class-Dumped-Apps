@interface IESECGoodsDetailHaiNanGroupItemDataModel : MTLModel
@property (nonatomic) IESECTextElement groupName;
@property (nonatomic) NSArray groupTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupTips;
- (void)setGroupTips:;
- (void)setGroupName:;
- (void).cxx_destruct;
- (id)groupName;
+ (id)groupTipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
