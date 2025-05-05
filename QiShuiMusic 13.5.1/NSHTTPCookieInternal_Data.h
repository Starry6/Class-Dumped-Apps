@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal
- (id)init;
- (void)dealloc;
- (id)_initWithProperties:fromString:;
- (id)_inner;
- (id)_initWithCookie:partition:;
- (id)_initWithHeader:;
@end
