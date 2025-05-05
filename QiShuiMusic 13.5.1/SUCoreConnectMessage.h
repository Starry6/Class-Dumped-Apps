@interface SUCoreConnectMessage : NSObject
@property (nonatomic) q messageType;
@property (nonatomic) NSString messageName;
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString clientIDRaw;
@property (nonatomic) NSInteger clientProcessIdentifier;
@property (nonatomic) SUCoreConnectVersion version;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary message;
@property (nonatomic) NSSet allowlistedClasses;
- (long long)messageType;
- (id)initWithType:messageName:clientID:version:message:;
- (id)allowlistedClasses;
- (int)clientProcessIdentifier;
- (id)version;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (id)message;
- (void).cxx_destruct;
- (id)messageName;
- (id)description;
- (id)clientIDRaw;
- (id)clientID;
+ (BOOL)validateMessageDictionary:;
+ (BOOL)supportsSecureCoding;
+ (id)nameForMessageType:;
@end
