@interface IESLiveSaaSPBNotifyMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString schema;
@property (nonatomic) q notifyType;
@property (nonatomic) NSString content;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) IESLiveSaaSPBNotifyMessage_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
