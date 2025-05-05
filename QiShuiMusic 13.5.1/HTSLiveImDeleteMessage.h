@interface HTSLiveImDeleteMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) GPBInt64Array deleteMsgIdsArray;
@property (nonatomic) Q deleteMsgIdsArray_Count;
+ (id)descriptor;
@end
