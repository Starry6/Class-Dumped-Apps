@interface IESLiveSaaSPBDataLifeLiveMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString body;
+ (id)descriptor;
@end
