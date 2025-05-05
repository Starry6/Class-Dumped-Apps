@interface IDSServerMessagingOptions : NSObject
@property (nonatomic) NSNumber timeout;
- (void)setTimeout:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeout;
+ (BOOL)supportsSecureCoding;
@end
