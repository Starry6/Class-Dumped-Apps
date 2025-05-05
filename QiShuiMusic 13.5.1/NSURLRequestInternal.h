@interface NSURLRequestInternal : NSObject
@property (nonatomic) ^v _inner;
- (id)init;
- (void)dealloc;
- (id)_initWithMessage:bodyParts:cachePolicy:timeout:mainDocumentURL:mutable:;
- (unsigned long long)hash;
- (id)_inner;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
