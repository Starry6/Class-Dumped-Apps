@interface SBSRelativeDisplayArrangement : NSObject
@property (nonatomic) NSString displayIdentifier;
@property (nonatomic) I edge;
@property (nonatomic) double offset;
- (id)initWithCoder:;
- (double)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)edge;
- (id)displayIdentifier;
- (id)initWithDisplayIdentifier:edge:offset:;
+ (BOOL)supportsSecureCoding;
@end
