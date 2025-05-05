@interface IESLiveSaaSSchemeRedirectInfo : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString schemeQuery;
@property (nonatomic) NSString urlQuery;
- (void)setSchemeQuery:;
- (id)schemeQuery;
- (void)setUrlQuery:;
- (id)urlQuery;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
@end
