@interface AWEPrivacyThreadJSBInfo : NSObject
@property (nonatomic) NSDictionary jsbInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willDispatch;
- (void)didEndDispatch;
- (void)actionBeforeBlockInvoke;
- (void)actionAfterBlockInvoked;
- (void)setJsbInfo:;
- (id)jsbInfo;
- (void).cxx_destruct;
@end
