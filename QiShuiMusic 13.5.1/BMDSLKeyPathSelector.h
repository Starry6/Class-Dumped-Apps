@interface BMDSLKeyPathSelector : BMDSLBaseCodable
@property (nonatomic) NSArray keyPaths;
- (id)keyPaths;
- (id)initWithKeyPaths:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithName:version:keyPaths:;
- (id)argumentsFromInput:combinedState:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)withKeyPaths:;
@end
