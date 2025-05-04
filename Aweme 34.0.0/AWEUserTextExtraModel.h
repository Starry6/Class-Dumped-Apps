@interface AWEUserTextExtraModel : AWEBaseApiModel
@property (nonatomic) NSNumber start;
@property (nonatomic) NSNumber end;
@property (nonatomic) q type;
@property (nonatomic) NSString searchText;
- (void)setStart:;
- (void)setEnd:;
- (id)end;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (id)start;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
