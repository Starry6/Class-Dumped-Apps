@interface AWELuckyCatPopupAmountData : MTLModel
@property (nonatomic) AWELuckyCatPopupText text;
@property (nonatomic) AWELuckyCatPopupTag tag;
@property (nonatomic) AWELuckyCatPopupSpaceModel space;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tag;
- (void)setTag:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)space;
- (void)setSpace:;
+ (id)tagJSONTransformer;
+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
