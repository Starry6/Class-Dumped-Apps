@interface IESLiveSaaSPBTextPieceUser : GPBMessage
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) BOOL withColon;
@property (nonatomic) BOOL selfShowRealName;
@property (nonatomic) NSInteger leftShowExtension;
@property (nonatomic) NSString leftAdditionalContent;
@property (nonatomic) NSString rightAdditionalContent;
+ (id)descriptor;
@end
