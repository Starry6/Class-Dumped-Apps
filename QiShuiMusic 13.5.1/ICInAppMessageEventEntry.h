@interface ICInAppMessageEventEntry : NSObject
@property (nonatomic) NSString messageIdentifier;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString eventIdentifier;
- (id)initWithCoder:;
- (id)eventIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)messageIdentifier;
- (id)params;
- (id)copyWithZone:;
- (id)initWithMessageIdentifier:params:;
- (id)initWithMessageIdentifier:params:eventIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
