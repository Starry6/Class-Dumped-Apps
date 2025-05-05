@interface DAVResourceIdParser_OC : NSObject
@property (nonatomic) NSString protocol;
@property (nonatomic) NSString host;
@property (nonatomic) NSString query;
@property (nonatomic) NSDictionary queryParams;
@property (nonatomic) {shared_ptr<davinci::resource::DAVResourceIdParser>=^{DAVResourceIdParser}^{__shared_weak_count}} parser;
- (id)initWithResourceId:;
- (id)protocol;
- (void)setProtocol:;
- (id)host;
- (id)queryParams;
- (void)setQuery:;
- (void)setHost:;
- (id)query;
- (void).cxx_destruct;
- (id)parser;
- (id).cxx_construct;
- (void)setParser:;
- (void)setQueryParams:;
@end
