@interface IESECRitTagUIModel : MTLModel
@property (nonatomic) IESECRitTagBackgroundModel background;
@property (nonatomic) NSArray uiItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiItems;
- (void)setUiItems:;
- (id)background;
- (void)setBackground:;
- (void).cxx_destruct;
+ (id)uiItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
