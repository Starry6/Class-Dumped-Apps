@interface HTSLiveNotifyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString schema;
@property (nonatomic) q notifyType;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveNotifyMessage_Extra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) q notifyClass;
@property (nonatomic) GPBInt64Array flexSettingArray;
@property (nonatomic) Q flexSettingArray_Count;
@property (nonatomic) NSString bizScene;
+ (id)descriptor;
@end
