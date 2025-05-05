@interface AKPasswordCredential : NSObject
@property (nonatomic) NSString password;
@property (nonatomic) NSString userIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)password;
- (id)userIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithUser:password:;
+ (BOOL)supportsSecureCoding;
@end
