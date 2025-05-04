@interface AWELuckyCatPopupHeadTitleData : MTLModel
@property (nonatomic) Q style;
@property (nonatomic) AWELuckyCatPopupText text;
@property (nonatomic) AWELuckyCatPopupSpaceModel space;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setText:;
- (id)text;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (id)space;
- (void)setSpace:;
+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
