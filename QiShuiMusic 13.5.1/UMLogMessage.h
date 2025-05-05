@interface UMLogMessage : NSObject
@property (nonatomic) NSMutableArray publicStrings;
@property (nonatomic) NSMutableArray privateStrings;
@property (nonatomic) NSString publicString;
@property (nonatomic) NSString privateString;
- (id)init;
- (void)addPublicFormat:;
- (void)addPrivateFormat:;
- (id)_stringForArray:;
- (void)setPrivateStrings:;
- (void)setPublicStrings:;
- (id)privateString;
- (void).cxx_destruct;
- (id)publicString;
- (id)publicStrings;
- (id)privateStrings;
+ (id)messageWithUser:publicFormat:;
+ (id)messageWithTask:;
+ (id)messageWithUser:;
+ (id)messageWithTask:privateFormat:;
+ (id)messageWithUser:privateFormat:;
+ (id)messageWithPrivateFormat:arguments:;
+ (id)messageWithPublicFormat:arguments:;
+ (void)_addUserInfoFrom:toMessage:;
+ (id)messageWithPublicFormat:;
+ (id)messageWithTask:publicFormat:;
+ (id)messageWithPrivateFormat:;
+ (void)_addTaskInfoFrom:toMessage:;
@end
