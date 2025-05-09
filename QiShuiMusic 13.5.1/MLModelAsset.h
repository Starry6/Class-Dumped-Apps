@interface MLModelAsset : NSObject
@property (nonatomic) BOOL ranLoad;
@property (nonatomic) NSObject<MLModeling> asset;
@property (nonatomic) MLModelConfiguration loadConfiguration;
@property (nonatomic) NSDictionary archiveData;
@property (nonatomic) NSURL compiledURL;
@property (nonatomic) <MLModeling> model;
@property (nonatomic) <MLRegressor> regressor;
@property (nonatomic) <MLClassifier> classifier;
- (id)model;
- (id)archiveData;
- (BOOL)load:;
- (id)loadConfiguration;
- (BOOL)ranLoad;
- (id)asset;
- (id)compiledURL;
- (id)classifier;
- (void)setRanLoad:;
- (id)initWithURL:configuration:error:;
- (id)initWithArchiveData:;
- (id)modelWithError:;
- (id)classifierWithError:;
- (void).cxx_destruct;
- (id)modelWithConfiguration:error:;
- (id)description;
- (id)regressor;
- (void)setAsset:;
- (void)setLoadConfiguration:;
- (id)regressorWithError:;
- (id)initWithURL:error:;
+ (id)modelAssetWithURL:configuration:error:;
+ (id)modelAssetWithSpecification:compilerOptions:error:;
+ (id)modelAssetWithSpecification:error:;
+ (BOOL)purgeANEIRForModelAtURL:error:;
+ (BOOL)isANESupported;
+ (id)modelAssetWithSpecificationURL:error:;
+ (id)modelAssetWithSpecificationData:error:;
+ (id)modelAssetWithSpecificationURL:compilerOptions:error:;
+ (id)fetchNetworkURLFromCompiledModelAtURL:error:;
+ (id)modelAssetWithURL:error:;
+ (BOOL)purgeANEBinaryForModelAtURL:error:;
+ (BOOL)needsANECompilationForModelAtURL:result:error:;
+ (id)resolveExternalReferencesInSpecificationData:specificationURL:error:;
@end
