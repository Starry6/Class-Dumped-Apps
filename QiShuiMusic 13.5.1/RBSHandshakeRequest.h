@interface RBSHandshakeRequest : NSObject
@property (nonatomic) NSSet assertionDescriptors;
@property (nonatomic) NSArray savedEndowments;
@property (nonatomic) I euid;
@property (nonatomic) I auid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)euid;
- (void)setEuid:;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (void)setAssertionDescriptors:;
- (id)savedEndowments;
- (void)setSavedEndowments:;
- (unsigned long long)hash;
- (void)setAuid:;
- (unsigned int)auid;
- (void).cxx_destruct;
- (id)assertionDescriptors;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
