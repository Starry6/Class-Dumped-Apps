@interface BytedCertUserInfo : NSObject
@property (nonatomic) NSString ticket;
- (id)ticket;
+ (id)sharedInstance;
@end
