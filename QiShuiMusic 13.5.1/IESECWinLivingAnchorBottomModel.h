@interface IESECWinLivingAnchorBottomModel : MTLModel
@property (nonatomic) Q targetTabType;
@property (nonatomic) NSString targetCategory;
@property (nonatomic) NSString targetSubCategory;
@property (nonatomic) Q sortType;
@property (nonatomic) NSString bottomText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTargetCategory:;
- (void)setTargetSubCategory:;
- (void)setTargetTabType:;
- (id)targetCategory;
- (id)targetSubCategory;
- (unsigned long long)targetTabType;
- (void).cxx_destruct;
- (unsigned long long)sortType;
- (void)setSortType:;
- (id)bottomText;
- (void)setBottomText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
