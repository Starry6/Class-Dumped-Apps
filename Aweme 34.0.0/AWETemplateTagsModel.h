@interface AWETemplateTagsModel : AWEBaseApiModel
@property (nonatomic) NSString businessID;
@property (nonatomic) q priority;
@property (nonatomic) q type;
@property (nonatomic) AWETemplateStaticLabelInfoModel staticLabel;
@property (nonatomic) NSString labelGroup;
@property (nonatomic) NSString labelType;
- (id)staticLabel;
- (void)setStaticLabel:;
- (id)labelGroup;
- (void)setLabelGroup:;
- (id)labelType;
- (void)setLabelType:;
- (id)businessID;
- (void)setBusinessID:;
- (long long)priority;
- (long long)type;
- (void)setType:;
- (void)setPriority:;
- (void).cxx_destruct;
+ (id)staticLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
