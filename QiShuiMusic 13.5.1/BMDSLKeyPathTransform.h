@interface BMDSLKeyPathTransform : BMDSLBaseCodable
@property (nonatomic) NSString keyPath;
- (id)initWithCoder:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)initWithKeyPath:;
- (id)initWithKeyPath:name:version:;
+ (BOOL)supportsSecureCoding;
+ (id)withKeyPath:;
@end
