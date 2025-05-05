@interface IESLiveSaaSVSGiftPannel : BDDynamicMTLModel
@property (nonatomic) NSArray backgroundColorsArray;
@property (nonatomic) IESLiveSaaSImage background;
@property (nonatomic) IESLiveSaaSImage selected;
@property (nonatomic) IESLiveSaaSImage topTitleImage;
@property (nonatomic) IESLiveSaaSImage backgroundBottomImage;
@property (nonatomic) IESLiveSaaSImage backgroundTopImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundBottomImage;
- (id)backgroundTopImage;
- (void)setBackgroundBottomImage:;
- (void)setBackgroundTopImage:;
- (void)setTopTitleImage:;
- (id)topTitleImage;
- (void).cxx_destruct;
+ (id)backgroundBottomImageJSONTransformer;
+ (id)backgroundJSONTransformer;
+ (id)backgroundTopImageJSONTransformer;
+ (id)selectedJSONTransformer;
+ (id)topTitleImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
