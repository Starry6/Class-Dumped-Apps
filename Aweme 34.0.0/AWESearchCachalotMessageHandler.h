@interface AWESearchCachalotMessageHandler : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) @? callBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleMessage:callback:;
- (void)setCallBack:;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (id)callBack;
+ (id)handlerWithMessageID:callBack:;
@end
