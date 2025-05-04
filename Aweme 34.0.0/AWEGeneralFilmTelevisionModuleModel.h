@interface AWEGeneralFilmTelevisionModuleModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray moduleArray;
@property (nonatomic) BOOL showDivideLine;
- (void)setCID:;
- (void)setShowDivideLine:;
- (id)moduleArray;
- (void)setModuleArray:;
- (BOOL)showDivideLine;
- (id)cID;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)moduleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
