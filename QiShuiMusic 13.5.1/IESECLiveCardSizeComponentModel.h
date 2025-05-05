@interface IESECLiveCardSizeComponentModel : MTLModel
@property (nonatomic) NSString imageURLStr;
@property (nonatomic) IESECURLModel titleImageInfo;
@property (nonatomic) NSArray detailInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)detailInfo;
- (void)setDetailInfo:;
- (void)setTitleImageInfo:;
- (id)titleImageInfo;
- (void).cxx_destruct;
- (id)imageURLStr;
- (void)setImageURLStr:;
+ (id)JSONKeyPathsByPropertyKey;
@end
