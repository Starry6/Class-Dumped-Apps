@interface IESLiveSaaSFeedPreviewAnchorDetailUIConfig : MTLModel
@property (nonatomic) BOOL shouldHideAvatar;
@property (nonatomic) double nameLabelFont;
@property (nonatomic) double titleFont;
@property (nonatomic) NSString titleColor;
@property (nonatomic) double nameLabelTopMargin;
@property (nonatomic) double nameLabelBottomMargin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDefault;
- (double)nameLabelBottomMargin;
- (double)nameLabelFont;
- (double)nameLabelTopMargin;
- (BOOL)shouldHideAvatar;
- (double)titleFont;
- (id)titleColor;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
