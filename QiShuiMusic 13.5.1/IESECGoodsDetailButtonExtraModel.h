@interface IESECGoodsDetailButtonExtraModel : MTLModel
@property (nonatomic) Q membershipStatus;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString joinMemberUrl;
@property (nonatomic) NSString defaultText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)joinMemberUrl;
- (unsigned long long)membershipStatus;
- (void)setJoinMemberUrl:;
- (void)setMembershipStatus:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (id)defaultText;
- (void)setDefaultText:;
+ (id)JSONStringToDictTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
