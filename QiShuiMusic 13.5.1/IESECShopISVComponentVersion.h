@interface IESECShopISVComponentVersion : MTLModel
@property (nonatomic) NSString ID;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString version;
@property (nonatomic) NSString indexURL;
@property (nonatomic) NSString settingURL;
@property (nonatomic) NSString lynxIndexURL;
@property (nonatomic) q frameworkType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)frameworkType;
- (id)lynxIndexURL;
- (void)setFrameworkType:;
- (void)setLynxIndexURL:;
- (void)setSettingURL:;
- (id)settingURL;
- (void)setID:;
- (id)ID;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)indexURL;
- (void)setIndexURL:;
- (id)componentID;
- (void)setComponentID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
