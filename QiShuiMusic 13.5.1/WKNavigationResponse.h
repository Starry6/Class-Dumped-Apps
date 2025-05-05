@interface WKNavigationResponse : NSObject
@property (nonatomic) NSString _sf_suggestedFilename;
@property (nonatomic) NSString _sf_explicitSuggestedFilename;
@property (nonatomic) WKFrameInfo _frame;
@property (nonatomic) NSURLRequest _request;
@property (nonatomic) NSString _downloadAttribute;
@property (nonatomic) BOOL forMainFrame;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) BOOL canShowMIMEType;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_sf_explicitSuggestedFilename;
- (id)_sf_suggestedFilename;
- (BOOL)_sf_allowReloadingInMainFrame;
- (long long)_sf_responsePolicy:uti:;
- (void)dealloc;
- (id)_apiObject;
- (id)response;
- (id)description;
- (id)_request;
- (id)_frame;
- (BOOL)isForMainFrame;
- (BOOL)canShowMIMEType;
- (id)_downloadAttribute;
@end
