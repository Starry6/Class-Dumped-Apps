@interface AWEMemoriesPlayerModel : NSObject
@property (nonatomic) PHAsset asset;
@property (nonatomic) Q playerModelType;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) <AWERecallThemeModelProtocol> themeModel;
- (id)awemeModel;
- (id)initWithAwemeModel:;
- (id)themeModel;
- (unsigned long long)playerModelType;
- (id)initWithLocalIdentifier:modelType:;
- (id)initWithThemeModel:;
- (BOOL)validationLocalParams;
- (id)localIdentifier;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)asset;
- (id)initWithPHAsset:;
@end
