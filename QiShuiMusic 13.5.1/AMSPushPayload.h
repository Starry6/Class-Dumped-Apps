@interface AMSPushPayload : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSString actionType;
@property (nonatomic) q alertType;
@property (nonatomic) NSDictionary aps;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString logKey;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) q priority;
@property (nonatomic) NSString URLString;
- (id)account;
- (id)payload;
- (id)initWithPayload:;
- (id)URLString;
- (id)actionType;
- (id)accountIdentifier;
- (id)logKey;
- (id)objectForKeyedSubscript:;
- (long long)alertType;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (long long)priority;
- (id)aps;
+ (id)actionTypeFromPayload:;
@end
