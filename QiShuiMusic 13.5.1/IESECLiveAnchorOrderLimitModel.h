@interface IESECLiveAnchorOrderLimitModel : MTLModel
@property (nonatomic) NSString backGroundColor;
@property (nonatomic) IESECLiveImageURLModel leftIcon;
@property (nonatomic) NSArray limitContents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backGroundColor;
- (id)limitContents;
- (void)setBackGroundColor:;
- (void)setLeftIcon:;
- (void)setLimitContents:;
- (void).cxx_destruct;
- (id)leftIcon;
+ (id)limitContentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
