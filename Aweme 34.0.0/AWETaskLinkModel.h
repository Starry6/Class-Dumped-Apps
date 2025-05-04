@interface AWETaskLinkModel : AWEAdLinkModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ID;
@property (nonatomic) NSString subtitle;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (void)setID:;
- (id)ID;
- (id)componentSeparator;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)iconImageName;
+ (id)JSONKeyPathsByPropertyKey;
@end
