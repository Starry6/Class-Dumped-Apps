@interface WKNavigationData : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSURLRequest originalRequest;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (id)destinationURL;
- (id)title;
- (id)response;
- (id)originalRequest;
@end
