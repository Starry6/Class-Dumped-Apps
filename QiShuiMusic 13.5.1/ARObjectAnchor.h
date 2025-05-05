@interface ARObjectAnchor : ARAnchor
@property (nonatomic) ARReferenceObject referenceObject;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithAnchor:;
- (id)referenceObject;
- (id)initWithReferenceObject:transform:;
+ (BOOL)supportsSecureCoding;
@end
