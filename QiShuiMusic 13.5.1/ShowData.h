@interface ShowData : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSString introduce;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q startTimestamp;
@property (nonatomic) q endTimestamp;
@property (nonatomic) NSString tag;
+ (id)descriptor;
@end
