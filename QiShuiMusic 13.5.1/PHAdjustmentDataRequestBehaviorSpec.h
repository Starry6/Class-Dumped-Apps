@interface PHAdjustmentDataRequestBehaviorSpec : NSObject
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) BOOL synchronous;
- (void)setSynchronous:;
- (BOOL)isNetworkAccessAllowed;
- (void)setNetworkAccessAllowed:;
- (BOOL)isSynchronous;
@end
