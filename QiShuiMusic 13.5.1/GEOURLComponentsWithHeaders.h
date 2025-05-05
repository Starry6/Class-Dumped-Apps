@interface GEOURLComponentsWithHeaders : NSObject
@property (nonatomic) NSURLComponents URLComponents;
@property (nonatomic) NSMutableDictionary headerFields;
@property (nonatomic) NSURL URL;
@property (nonatomic) GEOURLWithHeaders URLWithHeaders;
- (id)init;
- (id)initWithURLComponents:;
- (id)initWithURL:;
- (id)initWithString:;
- (id)URLComponents;
- (void).cxx_destruct;
- (id)headerFields;
- (void)updateQueryItemsWithBlock:;
- (id)URLWithHeaders;
- (id)URL;
@end
