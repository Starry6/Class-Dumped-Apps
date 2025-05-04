@interface AWEECShoppingGuideMessageLinkSectionModel : AWEECShoppingGuideMessageSectionModel
@property (nonatomic) Q type;
@property (nonatomic) NSString prompt;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSArray moreInfoData;
@property (nonatomic) q expandNum;
- (id)jumpSchema;
- (void)setJumpSchema:;
- (long long)expandNum;
- (id)moreInfoData;
- (void)setExpandNum:;
- (void)setMoreInfoData:;
- (void)setPrompt:;
- (id)prompt;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)moreInfoDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
