@interface IESLiveSaaSPBCardLockInfo : GPBMessage
@property (nonatomic) NSInteger lockStatus;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString cellText;
+ (id)descriptor;
@end
