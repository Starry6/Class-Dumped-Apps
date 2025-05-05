@interface HTSLiveGameCPBaseMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveGameCPShowMessage showInfo;
@property (nonatomic) BOOL hasShowInfo;
+ (id)descriptor;
@end
