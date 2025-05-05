@interface IESLiveSaaSPBProgrammeStateControlMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString pId;
@property (nonatomic) NSInteger state;
+ (id)descriptor;
@end
