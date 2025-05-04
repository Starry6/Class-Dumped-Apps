@interface AWENearbyGrouponNegativeFeedbackSetting : AWEBaseApiModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSArray negativeFeedbackOptions;
- (id)lynxUrl;
- (void)setLynxUrl:;
- (id)negativeFeedbackOptions;
- (void)setNegativeFeedbackOptions:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
