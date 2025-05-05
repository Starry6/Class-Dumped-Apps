@interface BFURL : NSObject
@property (nonatomic) NSURL targetURL;
@property (nonatomic) NSDictionary targetQueryParameters;
@property (nonatomic) NSDictionary appLinkData;
@property (nonatomic) NSDictionary appLinkExtras;
@property (nonatomic) BFAppLink appLinkReferer;
@property (nonatomic) NSURL inputURL;
@property (nonatomic) NSDictionary inputQueryParameters;
- (id)appLinkExtras;
- (id)appLinkReferer;
- (id)initWithURL:forOpenInboundURL:sourceApplication:forRenderBackToReferrerBar:;
- (id)inputQueryParameters;
- (id)targetQueryParameters;
- (void).cxx_destruct;
- (id)targetURL;
- (id)inputURL;
- (id)appLinkData;
+ (id)URLForRenderBackToReferrerBarURL:;
+ (id)URLWithInboundURL:sourceApplication:;
+ (id)URLWithURL:;
+ (id)decodeURLString:;
+ (id)queryParametersForURL:;
@end
