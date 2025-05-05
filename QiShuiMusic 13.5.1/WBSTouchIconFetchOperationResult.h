@interface WBSTouchIconFetchOperationResult : NSObject
@property (nonatomic) UIImage touchIcon;
@property (nonatomic) NSString host;
@property (nonatomic) BOOL favicon;
@property (nonatomic) BOOL pageRequestDidSucceed;
@property (nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic) NSURLResponse response;
- (id)touchIcon;
- (id)host;
- (id)response;
- (void).cxx_destruct;
- (BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)initWithTouchIcon:host:isFavicon:pageRequestDidSucceed:response:higherPriorityIconDownloadFailedDueToNetworkError:;
- (BOOL)isFavicon;
- (BOOL)pageRequestDidSucceed;
+ (id)resultForFetchFailureWithHost:pageRequestDidSucceed:response:;
+ (id)resultWithTouchIcon:host:isFavicon:pageRequestDidSucceed:response:higherPriorityIconDownloadFailedDueToNetworkError:;
@end
