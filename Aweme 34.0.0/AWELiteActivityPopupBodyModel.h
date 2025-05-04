@interface AWELiteActivityPopupBodyModel : MTLModel
@property (nonatomic) NSString topSmallText;
@property (nonatomic) NSString middleText;
@property (nonatomic) AWELiteActivityPopupPrimaryTextModel primaryText;
@property (nonatomic) AWELiteActivityPopupMiddleBlockModel middleBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)topSmallText;
- (void)setTopSmallText:;
- (id)middleBlock;
- (void)setMiddleBlock:;
- (void)setPrimaryText:;
- (id)primaryText;
- (void).cxx_destruct;
- (id)middleText;
- (void)setMiddleText:;
+ (id)primaryTextJSONTransformer;
+ (id)middleBlockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
