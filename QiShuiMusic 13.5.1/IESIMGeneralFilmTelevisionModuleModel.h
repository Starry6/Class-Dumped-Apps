@interface IESIMGeneralFilmTelevisionModuleModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray moduleArray;
@property (nonatomic) BOOL showDivideLine;
- (id)cID;
- (void)setCID:;
- (void)setModuleArray:;
- (id)moduleArray;
- (void)setShowDivideLine:;
- (BOOL)showDivideLine;
- (void)setName:;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)name;
+ (id)moduleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
