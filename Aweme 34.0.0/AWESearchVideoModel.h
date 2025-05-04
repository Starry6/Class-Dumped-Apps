@interface AWESearchVideoModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) @ model;
@property (nonatomic) AWESearchVideoWordsQueryRecordModel queryRecordModel;
@property (nonatomic) NSDictionary extraInfo;
- (id)queryRecordModel;
- (void)setQueryRecordModel:;
- (void)setModel:;
- (long long)type;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)queryRecordModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
