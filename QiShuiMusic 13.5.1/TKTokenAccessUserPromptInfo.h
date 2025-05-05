@interface TKTokenAccessUserPromptInfo : NSObject
@property (nonatomic) NSString clientDisplayName;
@property (nonatomic) NSString providerDisplayName;
@property (nonatomic) NSUUID correlationID;
- (id)correlationID;
- (id)initWithCoder:;
- (id)providerDisplayName;
- (id)clientDisplayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithTokenAccessRequest:;
+ (BOOL)supportsSecureCoding;
@end
