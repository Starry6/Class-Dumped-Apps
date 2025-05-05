@interface IESECLiveReplayFlow : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray text;
@property (nonatomic) IESECLiveImageURLModel pic;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSNumber isUserShop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pic;
- (void)setPic:;
- (id)isUserShop;
- (void)setIsUserShop:;
- (void)setText:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)buttonTitle;
- (id)text;
- (void)setButtonTitle:;
+ (id)picJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
