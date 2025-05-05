@interface IESLiveSaaSGoodsProductTagModel : BDDynamicMTLModel
@property (nonatomic) NSString activityURL;
@property (nonatomic) q activityType;
@property (nonatomic) NSNumber activityID;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString banner;
@property (nonatomic) NSNumber bannerWidth;
@property (nonatomic) NSNumber bannerHeight;
@property (nonatomic) NSString urlDoc;
@property (nonatomic) NSArray textList;
@property (nonatomic) IESLiveSaaSEcommerceImageURLModel textIcon;
@property (nonatomic) NSString trackTag;
@property (nonatomic) NSString labelName;
@property (nonatomic) q position;
@property (nonatomic) BOOL realShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)realShowed;
- (void)setRealShowed:;
+ (id)JSONKeyPathsByPropertyKey;
@end
