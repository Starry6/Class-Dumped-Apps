@interface AWECodeGenRecommendEntranceModel : AWEBaseDataModel
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) q recommendEntranceType;
- (long long)recommendEntranceType;
- (void)setRecommendEntranceType:;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
