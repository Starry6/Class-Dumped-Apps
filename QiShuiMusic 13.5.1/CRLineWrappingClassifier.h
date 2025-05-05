@interface CRLineWrappingClassifier : NSObject
@property (nonatomic) MLModel model;
@property (nonatomic) NSString locale;
@property (nonatomic) Q featureCount;
@property (nonatomic) NSString modelLocale;
- (id)model;
- (id)locale;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)initWithLocale:;
- (id)initWithContentsOfURL:error:;
- (id)modelLocale;
- (unsigned long long)featureCount;
+ (id)localeToModelMap;
+ (BOOL)localeIsSupported:;
+ (id)urlOfModelForLocale:;
+ (id)modelLocaleForLocale:;
@end
