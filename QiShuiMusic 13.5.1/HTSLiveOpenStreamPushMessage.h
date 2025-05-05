@interface HTSLiveOpenStreamPushMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString roomId;
@property (nonatomic) HTSLiveStreamUrl streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) NSString pullDataExtra;
@property (nonatomic) NSString pushDataExtra;
+ (id)descriptor;
@end
