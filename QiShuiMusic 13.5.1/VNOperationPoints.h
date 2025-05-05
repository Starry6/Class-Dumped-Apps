@interface VNOperationPoints : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)getDefaultConfidence:forClassificationIdentifier:error:;
- (BOOL)getConfidence:forClassificationIdentifier:withPrecision:error:;
- (BOOL)getPrecision:forClassificationIdentifier:confidence:error:;
- (BOOL)getConfidence:forClassificationIdentifier:withRecall:error:;
- (BOOL)getRecall:forClassificationIdentifier:confidence:error:;
+ (BOOL)supportsSecureCoding;
+ (id)loadFromURL:error:;
+ (id)errorForUnimplementedMethod:;
+ (id)errorForUnknownClassificationIdentifier:;
+ (id)unspecifiedOperationPoints;
@end
