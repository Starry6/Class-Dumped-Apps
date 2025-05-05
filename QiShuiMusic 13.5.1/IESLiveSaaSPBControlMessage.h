@interface IESLiveSaaSPBControlMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q action;
@property (nonatomic) NSString tips;
@property (nonatomic) IESLiveSaaSPBControlMessage_Extra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) IESLiveSaaSPBPublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
