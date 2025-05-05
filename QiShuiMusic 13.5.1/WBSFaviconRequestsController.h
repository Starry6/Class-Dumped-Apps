@interface WBSFaviconRequestsController : NSObject
@property (nonatomic) WBSSiteMetadataManager manager;
@property (nonatomic) q priority;
@property (nonatomic) {CGSize=dd} size;
- (void)setPriority:;
- (void)dealloc;
- (id)manager;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
- (long long)priority;
- (id)initWithSiteMetadataManager:;
- (void)registerRequestForDomain:withToken:completion:;
- (void)registerRequestForURLString:withToken:completion:;
- (void)registerRequestForURLString:withToken:returnDefaultIconIfNoneAvailable:iconSize:isURLTypedByUser:completion:;
- (void)registerOneTimeRequestForURLString:withToken:completion:;
- (void)registerOneTimeRequestForURLString:withToken:returnDefaultIconIfNoneAvailable:iconSize:isURLTypedByUser:completion:;
- (void)registerOneTimeRequestForDomain:withToken:completion:;
- (void)cancelAllRegistrationsWithCompletionHandler:;
- (void)cancelAllRegistrations;
- (void)_issueRequest:isOneTime:withToken:completion:;
@end
