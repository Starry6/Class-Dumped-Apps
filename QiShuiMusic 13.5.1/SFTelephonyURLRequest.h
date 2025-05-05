@interface SFTelephonyURLRequest : NSObject
@property (nonatomic) NSString successNotificationName;
@property (nonatomic) NSString failureNotificationName;
@property (nonatomic) @? completionHandler;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:;
- (id)completionHandler;
- (id)successNotificationName;
- (void)setSuccessNotificationName:;
- (id)failureNotificationName;
- (void)setFailureNotificationName:;
@end
