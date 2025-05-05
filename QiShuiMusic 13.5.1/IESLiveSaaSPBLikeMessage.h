@interface IESLiveSaaSPBLikeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q count;
@property (nonatomic) q total;
@property (nonatomic) q color;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString icon;
@property (nonatomic) IESLiveSaaSPBPicoDisplayInfo picoDisplayInfo;
@property (nonatomic) BOOL hasPicoDisplayInfo;
@property (nonatomic) IESLiveSaaSPBDisplayControlInfo displayControlInfo;
@property (nonatomic) BOOL hasDisplayControlInfo;
+ (id)descriptor;
@end
