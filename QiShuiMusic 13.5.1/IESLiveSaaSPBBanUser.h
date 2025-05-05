@interface IESLiveSaaSPBBanUser : GPBMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString anchorExplain;
@property (nonatomic) NSString audienceExplain;
@property (nonatomic) NSString openId;
+ (id)descriptor;
@end
