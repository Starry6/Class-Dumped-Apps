@interface IESLiveSaaSPBSkyEyeAnchorSetMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBImage titleImage;
@property (nonatomic) BOOL hasTitleImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString topTip;
@property (nonatomic) NSString bottomTip;
+ (id)descriptor;
@end
