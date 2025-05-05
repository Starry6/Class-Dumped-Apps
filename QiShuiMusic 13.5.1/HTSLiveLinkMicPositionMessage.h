@interface HTSLiveLinkMicPositionMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveLinkMicPositionListChangeContent listChangeContent;
@property (nonatomic) HTSLiveLinkMicPositionVerifyContent verifyContent;
+ (id)descriptor;
@end
