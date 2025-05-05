@interface IESIMXiGuaRelatedBarModel : MTLModel
@property (nonatomic) NSString appID;
@property (nonatomic) IESIMURLModel icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString openUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openUrl;
- (void)setOpenUrl:;
- (id)icon;
- (void)setTitle:;
- (void)setAppID:;
- (id)title;
- (id)appID;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
