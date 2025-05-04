@interface AWEFollowingListEntranceInfoModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString url;
@property (nonatomic) NSString urlV2;
@property (nonatomic) NSString type;
@property (nonatomic) NSString trackString;
@property (nonatomic) NSDictionary trackDict;
- (void)setTrackDict:;
- (id)trackDict;
- (id)urlV2;
- (void)setUrlV2:;
- (id)trackString;
- (void)setTrackString:;
- (void)setUrl:;
- (void)setText:;
- (id)text;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)url;
+ (id)trackDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
