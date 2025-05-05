@interface BMDSLArgumentTransform : BMDSLBaseCodable
@property (nonatomic) <BMDSLArgumentSelector> selector;
- (id)selector;
- (id)initWithSelector:name:version:;
- (id)initWithCoder:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSelector:;
+ (BOOL)supportsSecureCoding;
+ (id)withSelector:;
@end
