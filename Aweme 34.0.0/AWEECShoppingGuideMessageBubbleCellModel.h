@interface AWEECShoppingGuideMessageBubbleCellModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) Q position;
@property (nonatomic) AWEECShoppingGuideMessageSectionModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModel:;
- (unsigned long long)position;
- (unsigned long long)type;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
- (void)setPosition:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
