@interface AWEDoubleColumnSearchMerchandiseAladdinInfo : AWEBaseApiModel
@property (nonatomic) AWESearchAladdinLogDict logDict;
@property (nonatomic) AWEActivityModel activityInfo;
- (id)logDict;
- (void)setLogDict:;
- (void)setActivityInfo:;
- (void).cxx_destruct;
- (id)activityInfo;
+ (id)activityInfoJSONTransformer;
+ (id)logDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
