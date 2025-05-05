@interface CTServiceDescriptorContainer : NSObject
@property (nonatomic) NSArray descriptors;
- (id)descriptors;
- (id)initWithCoder:;
- (id)initWithDescriptors:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setDescriptors:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
