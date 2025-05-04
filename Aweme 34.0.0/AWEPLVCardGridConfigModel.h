@interface AWEPLVCardGridConfigModel : MTLModel
@property (nonatomic) NSArray titleSizeConfig;
@property (nonatomic) NSArray subTitleSizeConfig;
@property (nonatomic) q titleRow;
@property (nonatomic) NSArray cardColumnConfig;
@property (nonatomic) double heightPercent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardColumnConfig;
- (long long)titleRow;
- (id)titleSizeConfig;
- (void)setTitleSizeConfig:;
- (id)subTitleSizeConfig;
- (void)setSubTitleSizeConfig:;
- (void)setTitleRow:;
- (void)setCardColumnConfig:;
- (id)init;
- (void).cxx_destruct;
- (double)heightPercent;
- (void)setHeightPercent:;
+ (id)JSONKeyPathsByPropertyKey;
@end
