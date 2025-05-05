@interface CKContextContentProvider : NSObject
- (void)extractUsingExecutor:;
- (void)extractUsingExecutor:withOptions:;
- (double)timeout;
+ (unsigned char)controlCodeForExecutor:;
+ (id)handlePDFView:withExecutor:;
+ (void)extractContentFromWebViewPDFData:withCompletionHandler:;
@end
