@interface BSMachPortRight : NSObject
@property (nonatomic) NSString trace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)matchesPortOfRight:;
- (id)init;
- (BOOL)isUsable;
- (void)dealloc;
- (void)encodeWithXPCDictionary:;
- (unsigned int)port;
- (void)accessPort:;
- (unsigned int)rawPort;
- (unsigned int)extractPort;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (id)trace;
- (void)invalidate;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
+ (char)_type;
+ (BOOL)supportsSecureCoding;
@end
