@interface MLSequenceConstraint : NSObject
@property (nonatomic) MLFeatureDescription valueDescription;
@property (nonatomic) {_NSRange=QQ} countRange;
- (BOOL)isAllowedValue:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)valueDescription;
- (id)initWithValueDescription:countRange:;
- (id)countRange;
+ (BOOL)supportsSecureCoding;
@end
