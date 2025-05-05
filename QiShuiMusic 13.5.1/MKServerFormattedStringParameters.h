@interface MKServerFormattedStringParameters : NSObject
@property (nonatomic) {?=BqBBBd} options;
@property (nonatomic) NSDictionary variableOverrides;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOptions:variableOverrides:;
- (id)initWithInstructionsDistanceDetailLevel:variableOverrides:;
- (BOOL)isEqualToServerFormattedStringParameters:;
- (id)variableOverrides;
+ (BOOL)supportsSecureCoding;
@end
