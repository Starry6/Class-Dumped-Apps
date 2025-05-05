@interface CJSwiftIAPStore.CJSwiftIAPProductRequestDelegate : NSObject
- (id)init;
- (void)dealloc;
- (void)productsRequest:didReceiveResponse:;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (void)requestDidFinish:;
@end
