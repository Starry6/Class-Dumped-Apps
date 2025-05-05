@interface IESECLiveAnchorTransDetailInfoModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSDictionary bizParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)bizParams;
- (void)setBizParams:;
- (void)setJumpURL:;
- (void)setName:;
- (id)icon;
- (void)setTitle:;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)name;
- (id)subTitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
