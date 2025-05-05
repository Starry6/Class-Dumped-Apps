@interface IESIMGeneralFilmTVInfoTextModuleModel : IESIMBaseApiModel
@property (nonatomic) NSString line1;
@property (nonatomic) NSString line2;
@property (nonatomic) NSString line3;
@property (nonatomic) NSArray lineTextArray;
- (id)line1;
- (id)line2;
- (id)line3;
- (id)lineTextArray;
- (void)setLine1:;
- (void)setLine2:;
- (void)setLine3:;
- (void)setLineTextArray:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
