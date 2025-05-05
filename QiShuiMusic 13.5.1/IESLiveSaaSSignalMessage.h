@interface IESLiveSaaSSignalMessage : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) q priority;
@property (nonatomic) q type;
@property (nonatomic) NSDictionary extrasDict;
@property (nonatomic) IESLiveSaaSInteractUser targetUser;
@property (nonatomic) IESLiveSaaSInteractUser sendUser;
@property (nonatomic) NSString message;
- (id)extrasDict;
- (id)sendUser;
- (void)setExtrasDict:;
- (void)setSendUser:;
- (void)setTargetUser:;
- (void)setPriority:;
- (void)setMessage:;
- (void)setVersion:;
- (id)version;
- (void)setType:;
- (id)initWithMessage:;
- (long long)type;
- (id)message;
- (void).cxx_destruct;
- (long long)priority;
- (id)targetUser;
+ (id)messageStringWith:sendTo:from:;
+ (id)messageWith:;
@end
