@interface BMDSLMultiKeyPathsTransform : BMDSLBaseCodable
@property (nonatomic) NSArray keyPaths;
- (id)keyPaths;
- (id)initWithKeyPaths:;
- (id)initWithCoder:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithKeyPaths:name:version:;
+ (BOOL)supportsSecureCoding;
+ (id)withKeyPaths:;
@end
