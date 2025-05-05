@interface IESIMChallengeInquiryModel : MTLModel
@property (nonatomic) IESIMURLModel icon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ironManURL;
- (void)setIronManURL:;
- (void)setOpenURL:;
- (id)desc;
- (id)icon;
- (void)setDesc:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (id)openURL;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
