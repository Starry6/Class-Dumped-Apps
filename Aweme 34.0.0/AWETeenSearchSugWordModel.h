@interface AWETeenSearchSugWordModel : AWEBaseApiModel
@property (nonatomic) NSString wordID;
@property (nonatomic) NSString word;
@property (nonatomic) q icon;
@property (nonatomic) q wordSource;
@property (nonatomic) NSArray mathchArr;
- (void)setMathchArr:;
- (id)mathchArr;
- (long long)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setWordID:;
- (void)setWordSource:;
- (id)wordID;
- (long long)wordSource;
- (id)word;
- (void)setWord:;
+ (id)JSONKeyPathsByPropertyKey;
@end
