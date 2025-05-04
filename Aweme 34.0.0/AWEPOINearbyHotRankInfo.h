@interface AWEPOINearbyHotRankInfo : MTLModel
@property (nonatomic) NSString rankName;
@property (nonatomic) NSString rankNameV2;
@property (nonatomic) NSString rankScheme;
@property (nonatomic) NSString rankPosition;
@property (nonatomic) AWEURLModel rankIcon;
@property (nonatomic) NSString bottomBarText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankName;
- (void)setRankName:;
- (id)rankNameV2;
- (void)setRankNameV2:;
- (id)rankScheme;
- (void)setRankScheme:;
- (id)rankPosition;
- (void)setRankPosition:;
- (id)rankIcon;
- (void)setRankIcon:;
- (id)bottomBarText;
- (void)setBottomBarText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
