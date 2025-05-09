@interface WebPDFViewPlaceholder : WAKView
@property (nonatomic) NSArray pageRects;
@property (nonatomic) NSArray pageYOrigins;
@property (nonatomic) NSString title;
@property (nonatomic) NSObject<WebPDFViewPlaceholderDelegate> delegate;
@property (nonatomic) ^{CGPDFDocument=} document;
@property (nonatomic) ^{CGPDFDocument=} doc;
@property (nonatomic) Q totalPages;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) BOOL didCompleteLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (void)dealloc;
- (void)setDocument:;
- (void)setContainerSize:;
- (void)setDelegate:;
- (void)setTitle:;
- (void)layout;
- (id)title;
- (id)delegate;
- (id)doc;
- (id)document;
- (void).cxx_destruct;
- (id)containerSize;
- (void)didUnlockDocument;
- (void)clearDocument;
- (void)simulateClickOnLinkToURL:;
- (id)pageYOrigins;
- (id)rectForPageNumber:;
- (BOOL)didCompleteLayout;
- (unsigned long long)totalPages;
- (id)pageRects;
- (void)setPageRects:;
- (id)documentSource;
- (void)dataSourceUpdated:;
- (void)viewWillMoveToHostWindow:;
- (void)viewDidMoveToHostWindow;
- (void)receivedData:withDataSource:;
- (void)receivedError:withDataSource:;
- (void)finishedLoadingWithDataSource:;
- (BOOL)canProvideDocumentSource;
- (void)_notifyDidCompleteLayout;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:;
- (void)_updateTitleForURL:;
- (void)_updateTitleForDocumentIfAvailable;
- (id)_getPDFPageBounds:;
- (id)_computePageRects:;
- (void)setPageYOrigins:;
+ (void)setAsPDFDocRepAndView;
+ (Class)_representationClassForWebFrame:;
+ (id)supportedMIMETypes;
@end
