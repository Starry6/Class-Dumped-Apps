@interface AWEChallengeInquiryModel : MTLModel
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpenURL:;
- (void)setIronManURL:;
- (id)ironManURL;
- (id)icon;
- (void)setWebURL:;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)webURL;
- (id)openURL;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
