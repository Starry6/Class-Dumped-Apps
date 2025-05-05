@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation
@property (nonatomic) MPStoreLyricsSnippetURLComponents snippetURL;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)snippetURL;
- (void)setSnippetURL:;
@end
