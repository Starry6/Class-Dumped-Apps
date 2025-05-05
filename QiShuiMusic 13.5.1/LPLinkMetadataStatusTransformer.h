@interface LPLinkMetadataStatusTransformer : NSObject
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) <LPLinkMetadataStatusTransformerDelegate> delegate;
@property (nonatomic) BOOL wantsStatusItem;
@property (nonatomic) NSAttributedString statusText;
@property (nonatomic) NSURL actionURL;
@property (nonatomic) NSURL canonicalURL;
- (id)actionURL;
- (void)dealloc;
- (id)statusText;
- (void)setDelegate:;
- (id)metadata;
- (void)setMetadata:;
- (id)delegate;
- (void).cxx_destruct;
- (id)canonicalURL;
- (id)originalURL;
- (id)initWithMetadata:URL:;
- (BOOL)wantsStatusItem;
@end
