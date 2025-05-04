@interface AWEIMEnterChatInsertMsgMessageInfo : AWEBaseApiModel
@property (nonatomic) BOOL isDynamicMsgData;
@property (nonatomic) NSNumber msgType;
@property (nonatomic) NSString msgContent;
@property (nonatomic) NSDictionary msgExt;
@property (nonatomic) AWEIMEnterChatInsertMsgStrategy msgStrategy;
@property (nonatomic) AWEIMEnterChatInsertMsgDynamicMsgData dynamicMsgData;
- (id)msgContent;
- (id)msgStrategy;
- (id)msgExt;
- (BOOL)isDynamicMsgData;
- (id)dynamicMsgData;
- (void).cxx_destruct;
- (id)msgType;
+ (id)msgStrategyJSONTransformer;
+ (id)dynamicMsgDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
