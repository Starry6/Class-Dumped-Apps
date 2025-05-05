@interface SKStorePageRequest : NSObject
@property (nonatomic) q productPageStyle;
@property (nonatomic) NSDictionary productParameters;
@property (nonatomic) NSURL productURL;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)productURL;
- (void)setProductURL:;
- (void)setProductPageStyle:;
- (long long)productPageStyle;
- (id)productParameters;
- (void)setProductParameters:;
@end
