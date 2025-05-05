@interface ECRawMessageHeaders : NSObject
- (void).cxx_destruct;
- (id)allHeaderKeys;
- (id)headersForKey:;
- (id)firstHeaderForKey:;
- (id)initWithHeaderString:;
- (id)allHeaders;
@end
