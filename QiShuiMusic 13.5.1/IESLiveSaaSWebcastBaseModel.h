@interface IESLiveSaaSWebcastBaseModel : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary schemeExtraParams;
- (id)parsedKeys;
- (id)schemeExtraParams;
- (void)setSchemeExtraParams:;
- (id)initWithParams:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
