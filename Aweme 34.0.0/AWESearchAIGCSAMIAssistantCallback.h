@interface AWESearchAIGCSAMIAssistantCallback : NSObject
@property (nonatomic) <SAMICoreCallbackListener> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMessageReceived:withBlock:;
- (id)delegate;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
