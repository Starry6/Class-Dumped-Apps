@interface UIPrintInfoRequest : NSObject
@property (nonatomic) NSInteger requestState;
@property (nonatomic) @? completionHandler;
- (int)requestState;
- (void)setCompletionHandler:;
- (void)setRequestState:;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)requestPrintInfo;
+ (id)requestInfoForPrinter:;
@end
