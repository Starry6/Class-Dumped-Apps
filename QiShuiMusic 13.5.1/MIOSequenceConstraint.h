@interface MIOSequenceConstraint : NSObject
@property (nonatomic) MIOFeatureDescription valueDescription;
@property (nonatomic) {_MIORange=qq} countRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecification:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)valueDescription;
- (id)countRange;
- (id)sequenceFeatureTypeSpecification;
@end
