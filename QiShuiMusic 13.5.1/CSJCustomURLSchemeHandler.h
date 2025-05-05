@interface CSJCustomURLSchemeHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)webView:startURLSchemeTask:;
- (void)webView:stopURLSchemeTask:;
@end
