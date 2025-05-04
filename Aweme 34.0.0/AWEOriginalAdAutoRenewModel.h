@interface AWEOriginalAdAutoRenewModel : MTLModel
@property (nonatomic) NSString hintText;
@property (nonatomic) Q adType;
@property (nonatomic) q outFlowBottomBarPriority;
@property (nonatomic) NSString hintPageUrl;
@property (nonatomic) NSString hintIconUrl;
@property (nonatomic) NSString subHintText;
@property (nonatomic) NSString subHintIconUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hintText;
- (id)hintPageUrl;
- (id)hintIconUrl;
- (id)subHintIconUrl;
- (id)subHintText;
- (long long)outFlowBottomBarPriority;
- (void)setOutFlowBottomBarPriority:;
- (void)setHintPageUrl:;
- (void)setHintIconUrl:;
- (void)setSubHintText:;
- (void)setSubHintIconUrl:;
- (unsigned long long)adType;
- (void).cxx_destruct;
- (void)setAdType:;
- (void)setHintText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
