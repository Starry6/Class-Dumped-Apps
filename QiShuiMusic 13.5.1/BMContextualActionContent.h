@interface BMContextualActionContent : NSObject
@property (nonatomic) NSString contentType;
@property (nonatomic) NSDictionary contentMetadata;
- (id)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithType:metadata:;
- (id)contentMetadata;
+ (BOOL)supportsSecureCoding;
@end
