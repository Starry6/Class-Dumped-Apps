@interface AWESearchKeyboardMonitorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleEventDidEnd:;
- (id)eliminateKeysBeforeSendEvent;
- (id)eventName;
@end
