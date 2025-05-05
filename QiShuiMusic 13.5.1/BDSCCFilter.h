@interface BDSCCFilter : NSObject
@property (nonatomic) NSMutableArray whiteListArray;
@property (nonatomic) NSNumber switchFilter;
@property (nonatomic) <SCCFilterProtocol> handleReport;
@property (nonatomic) WKWebView webView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bdw_willBlockRequest:;
- (id)handleReport;
- (void)setHandleReport:;
- (void)setSwitchFilter:;
- (void)setWhiteListArray:;
- (id)switchFilter;
- (id)whiteListArray;
- (void)setWebView:;
- (id)webView;
- (void).cxx_destruct;
@end
