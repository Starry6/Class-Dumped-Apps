@interface AWEPadPolymericChannelSectionHeaderModel : MTLModel
@property (nonatomic) q headerType;
@property (nonatomic) NSString headerTitle;
@property (nonatomic) q rightLabelType;
@property (nonatomic) NSString rightLabelSchema;
@property (nonatomic) AWEPadPolymericChannelSectionHeaderExtraModel extraModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraModel;
- (void)setExtraModel:;
- (id)rightLabelSchema;
- (long long)rightLabelType;
- (void)setRightLabelType:;
- (void)setRightLabelSchema:;
- (void)setHeaderType:;
- (long long)headerType;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
- (BOOL)isUnavailable;
+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
