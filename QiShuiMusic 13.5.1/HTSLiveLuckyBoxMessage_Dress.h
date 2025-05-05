@interface HTSLiveLuckyBoxMessage_Dress : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) q dressOfflineTime;
@property (nonatomic) NSString jumpText;
@property (nonatomic) GPBInt64ObjectDictionary jumpSchemaToBox;
@property (nonatomic) Q jumpSchemaToBox_Count;
@property (nonatomic) GPBInt64ObjectDictionary jumpSchemaToDress;
@property (nonatomic) Q jumpSchemaToDress_Count;
+ (id)descriptor;
@end
