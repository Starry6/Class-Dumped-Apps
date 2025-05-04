@interface AWEOCRPortraitLandscapeInfo : MTLModel
@property (nonatomic) NSNumber shortSpacing;
@property (nonatomic) NSNumber longShortRatio;
@property (nonatomic) NSNumber longContentRatio;
@property (nonatomic) NSNumber shortContentRatio;
@property (nonatomic) NSString scanBgUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shortSpacing;
- (void)setShortSpacing:;
- (id)longShortRatio;
- (void)setLongShortRatio:;
- (id)longContentRatio;
- (void)setLongContentRatio:;
- (id)shortContentRatio;
- (void)setShortContentRatio:;
- (id)scanBgUrl;
- (void)setScanBgUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
