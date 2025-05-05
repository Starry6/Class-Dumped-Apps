@interface IESLiveWebcastBaseModel : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary schemeExtraParams;
@property (nonatomic) NSString originalURL;
- (id)parsedKeys;
- (id)schemeExtraParams;
- (void)setSchemeExtraParams:;
- (id)initWithParams:;
- (void).cxx_destruct;
- (id)params;
- (id)originalURL;
- (void)setOriginalURL:;
- (void)setParams:;
@end
