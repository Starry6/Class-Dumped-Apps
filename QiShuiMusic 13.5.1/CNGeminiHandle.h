@interface CNGeminiHandle : NSObject
@property (nonatomic) q handleType;
@property (nonatomic) NSString stringValue;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithString:type:;
- (id)stringValue;
- (long long)handleType;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
