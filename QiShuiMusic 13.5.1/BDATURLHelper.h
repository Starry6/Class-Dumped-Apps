@interface BDATURLHelper : NSObject
+ (id)URLQueryStringWithoutEncodeWithParameters:;
+ (id)URLWithString:relativeToURL:error:;
+ (id)URLWithURLString:error:;
+ (void)_decodeWithEncodedURLString:;
@end
