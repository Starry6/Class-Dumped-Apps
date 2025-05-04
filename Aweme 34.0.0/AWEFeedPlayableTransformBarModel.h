@interface AWEFeedPlayableTransformBarModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) AWEFeedPlayableIconModel icon;
@property (nonatomic) AWEFeedPlayableAdTagModel adTag;
@property (nonatomic) AWEFeedPlayableButtonInfoModel buttonInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buttonInfo;
- (void)setButtonInfo:;
- (id)subtitle;
- (id)icon;
- (void)setSubtitle:;
- (id)adTag;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setAdTag:;
+ (id)JSONKeyPathsByPropertyKey;
@end
