@interface HTSLiveControlMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q action;
@property (nonatomic) NSString tips;
@property (nonatomic) HTSLiveControlMessage_Extra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
