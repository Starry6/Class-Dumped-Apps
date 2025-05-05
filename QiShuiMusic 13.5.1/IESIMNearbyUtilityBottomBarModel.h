@interface IESIMNearbyUtilityBottomBarModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel iconURLModel;
@property (nonatomic) NSString text;
@property (nonatomic) q type;
@property (nonatomic) NSString schema;
@property (nonatomic) q count;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (void)setCount:;
- (id)schema;
- (void)setText:;
- (void)setType:;
- (void)setSchema:;
- (long long)type;
- (BOOL)isValid;
- (void).cxx_destruct;
- (long long)count;
- (id)text;
+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
