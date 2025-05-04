@interface AWEPLVSectionGridConfigModel : MTLModel
@property (nonatomic) NSArray titleSizeConfig;
@property (nonatomic) NSArray buttonTextSizeConfig;
@property (nonatomic) NSArray columns;
@property (nonatomic) NSArray maxRows;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleSizeConfig;
- (void)setTitleSizeConfig:;
- (id)buttonTextSizeConfig;
- (void)setButtonTextSizeConfig:;
- (id)maxRows;
- (void)setMaxRows:;
- (id)columns;
- (void)setColumns:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
