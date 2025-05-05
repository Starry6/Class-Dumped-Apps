@interface GEOURLWithHeaders : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSDictionary headerFields;
- (id)init;
- (id)initWithURL:headerFields:;
- (void).cxx_destruct;
- (id)headerFields;
- (id)URL;
@end
