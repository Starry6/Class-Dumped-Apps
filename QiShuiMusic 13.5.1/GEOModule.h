@interface GEOModule : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) GEOModuleConfiguration configuration;
@property (nonatomic) BOOL hasConfiguration;
@property (nonatomic) BOOL isExpectedToHaveConfiguration;
@property (nonatomic) NSInteger configurationExpectation;
- (int)type;
- (id)configuration;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasConfiguration;
- (id)initWithModule:moduleConfigProvider:;
- (int)configurationExpectation;
- (BOOL)isExpectedToHaveConfiguration;
@end
