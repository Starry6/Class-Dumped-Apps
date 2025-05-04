@interface AWEEcomSearchUIComponent : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString componentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
+ (id)makeStackView:;
+ (id)decorateView:model:;
+ (id)makeImageViewWith:;
+ (id)makeTextLabelWith:;
+ (id)JSONKeyPathsByPropertyKey;
@end
