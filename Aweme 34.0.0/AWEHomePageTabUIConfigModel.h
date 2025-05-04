@interface AWEHomePageTabUIConfigModel : MTLModel
@property (nonatomic) AWEHomePageTabTextConfigModel topTabTextConfigModel;
@property (nonatomic) AWEHomePageTabTextConfigModel bottomTabTextConfigModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)topTabTextConfigModel;
- (id)bottomTabTextConfigModel;
- (void)setTopTabTextConfigModel:;
- (void)setBottomTabTextConfigModel:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
