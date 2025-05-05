@interface UITextInputPayloadController : NSObject
@property (nonatomic) NSArray supportedPayloadIds;
@property (nonatomic) <UITextInputPayloadDelegate> payloadDelegate;
- (id)payloadDelegate;
- (void)setSupportedPayloadIds:;
- (void).cxx_destruct;
- (id)supportedPayloadIds;
- (void)setPayloadDelegate:;
+ (id)sharedInstance;
+ (void)releaseSharedInstance;
@end
