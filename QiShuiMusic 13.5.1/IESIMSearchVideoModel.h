@interface IESIMSearchVideoModel : IESIMBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) @ model;
@property (nonatomic) IESIMSearchVideoWordsQueryRecordModel queryRecordModel;
- (id)queryRecordModel;
- (void)setQueryRecordModel:;
- (id)model;
- (void)setModel:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (id)queryRecordModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
