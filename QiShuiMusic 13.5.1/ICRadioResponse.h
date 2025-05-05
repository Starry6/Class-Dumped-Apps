@interface ICRadioResponse : NSObject
@property (nonatomic) NSDictionary contentDictionary;
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) q version;
@property (nonatomic) NSArray performanceMetrics;
@property (nonatomic) ICStoreDialogResponse dialog;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSError serverError;
- (id)responseDictionary;
- (long long)version;
- (id)serverError;
- (void)setPerformanceMetrics:;
- (id)expirationDate;
- (id)performanceMetrics;
- (void).cxx_destruct;
- (id)initWithURLResponse:;
- (id)initWithResponseDictionary:expirationDate:;
- (id)dialog;
- (id)contentDictionary;
@end
