@interface IESLiveSaaSPBLinkMicPositionMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveSaaSPBLinkMicPositionListChangeContent listChangeContent;
@property (nonatomic) IESLiveSaaSPBLinkMicPositionVerifyContent verifyContent;
+ (id)descriptor;
@end
