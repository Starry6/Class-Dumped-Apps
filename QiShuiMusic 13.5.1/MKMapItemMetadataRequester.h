@interface MKMapItemMetadataRequester : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (id)init;
- (void)sendRequest:;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void).cxx_destruct;
- (void)cancelRequestsForMapItem:;
- (void)handleTask:withData:error:;
+ (id)sharedInstance;
@end
