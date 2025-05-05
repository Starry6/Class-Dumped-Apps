@interface HTSLiveBuffLockInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL locked;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString cellText;
+ (id)descriptor;
@end
