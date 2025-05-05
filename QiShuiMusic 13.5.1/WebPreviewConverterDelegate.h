@interface WebPreviewConverterDelegate : NSObject
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)connectionDidFinishLoading:;
- (id).cxx_construct;
- (void)connection:didFailWithError:;
- (void)connection:didReceiveData:lengthReceived:;
@end
