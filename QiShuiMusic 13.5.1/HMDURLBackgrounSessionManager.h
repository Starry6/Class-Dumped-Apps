@interface HMDURLBackgrounSessionManager : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSMutableDictionary responseDataDict;
@property (nonatomic) <HMDURLBackgrounSessionManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAllUploadTasks;
- (void)queryAllUploadTasks:;
- (id)responseDataDict;
- (id)responseDataWithTask:;
- (void)setResponseDataDict:;
- (id)uploadWithRequest:filePath:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setSession:;
- (id)init;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:didBecomeInvalidWithError:;
- (void)setDelegate:;
- (id)initWithDelegate:configuration:;
- (id)delegate;
- (id)session;
- (void).cxx_destruct;
@end
