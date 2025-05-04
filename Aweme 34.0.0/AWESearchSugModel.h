@interface AWESearchSugModel : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSArray hightlightPositions;
@property (nonatomic) AWESearchUser user;
@property (nonatomic) Q type;
@property (nonatomic) NSString sugTypeString;
@property (nonatomic) AWEDiscoverCategoryRecordModel wordRecord;
@property (nonatomic) AWESearchSugExtraModel extraInfo;
- (id)wordRecord;
- (void)setWordRecord:;
- (id)hightlightPositions;
- (void)setSugTypeString:;
- (id)sugTypeString;
- (void)setHightlightPositions:;
- (id)user;
- (void)setUser:;
- (id)content;
- (unsigned long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)userJSONTransformer;
+ (id)wordRecordJSONTransformer;
+ (id)hightlightPositionsJSONTransformer;
+ (id)extraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
