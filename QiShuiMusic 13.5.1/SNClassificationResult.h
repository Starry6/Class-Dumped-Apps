@interface SNClassificationResult : NSObject
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) NSString classifierIdentifier;
@property (nonatomic) NSArray classifications;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeRange;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithBinarySampleRepresentation:metadata:timestamp:;
- (id)binarySampleRepresentation;
- (id)classificationForIdentifier:;
- (id)classifications;
- (id)initWithClassificationDictionary:;
- (id)classifierIdentifier;
- (void)setClassifierIdentifier:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
