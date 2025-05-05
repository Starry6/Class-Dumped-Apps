@interface BMContextualActionParameter : NSObject
@property (nonatomic) NSString parameterType;
@property (nonatomic) NSDictionary parameterMetadata;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithType:metadata:;
- (id)parameterType;
- (id)parameterMetadata;
+ (BOOL)supportsSecureCoding;
@end
