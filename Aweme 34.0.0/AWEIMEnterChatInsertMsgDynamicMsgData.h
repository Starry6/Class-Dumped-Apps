@interface AWEIMEnterChatInsertMsgDynamicMsgData : AWEBaseApiModel
@property (nonatomic) AWEIMEnterChatInsertMsgDynamicPatchModel dynamicPatchModel;
@property (nonatomic) AWEIMEnterChatInsertMsgUIInfo uiInfo;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger platform;
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary extData;
@property (nonatomic) BOOL isV2;
@property (nonatomic) NSInteger actionInfoType;
@property (nonatomic) NSString actionContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dynamicPatchModel;
- (id)extData;
- (id)uiInfo;
- (BOOL)isV2;
- (int)actionInfoType;
- (id)schema;
- (int)type;
- (int)platform;
- (void).cxx_destruct;
- (id)actionContent;
+ (id)uiInfoJSONTransformer;
+ (id)dynamicPatchModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
