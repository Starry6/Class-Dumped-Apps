@interface NSURLSessionTaskHTTPAuthenticator : NSObject
@property (nonatomic) NSSet statusCodes;
- (void)dealloc;
- (id)statusCodes;
- (void)getAuthenticationHeadersForTask:task:response:completionHandler:;
- (id)initWithStatusCodes:;
- (void)setStatusCodes:;
- (id)copyWithZone:;
+ (id)sessionTaskHTTPAuthenticatorWithContext:statusCodes:;
@end
