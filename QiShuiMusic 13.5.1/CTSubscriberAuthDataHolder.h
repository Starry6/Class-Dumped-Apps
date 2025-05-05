@interface CTSubscriberAuthDataHolder : NSObject
@property (nonatomic) NSDictionary dict;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)dict;
- (BOOL)isEqual:;
- (void)setDict:;
+ (BOOL)supportsSecureCoding;
@end
