@interface IESLiveSaaSPBCommerceMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q messageType;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
