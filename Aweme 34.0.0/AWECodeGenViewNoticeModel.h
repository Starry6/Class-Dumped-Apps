@interface AWECodeGenViewNoticeModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenAwemeModel awemeModel;
@property (nonatomic) NSArray fromUserModelArray;
@property (nonatomic) NSInteger mergeCount;
@property (nonatomic) NSString labelText;
@property (nonatomic) AWECodeGenRelationDynamicLableModel relationLabelModel;
@property (nonatomic) NSInteger labelType;
@property (nonatomic) NSString labelTracking;
- (id)awemeModel;
- (void)setAwemeModel:;
- (int)mergeCount;
- (id)relationLabelModel;
- (id)labelTracking;
- (id)fromUserModelArray;
- (void)setMergeCount:;
- (void)setRelationLabelModel:;
- (void)setLabelTracking:;
- (void)setFromUserModelArray:;
- (id)labelText;
- (int)labelType;
- (void)setLabelType:;
- (void)setLabelText:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
