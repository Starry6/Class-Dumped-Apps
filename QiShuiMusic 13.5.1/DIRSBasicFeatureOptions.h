@interface DIRSBasicFeatureOptions : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addFeatureOptions:;
- (id)exportFeatureOptions;
- (void)removeFeatureOptionsKeys:;
- (void)commonInit;
- (void).cxx_destruct;
+ (id)moduleId;
+ (id)moduleVersion;
@end
