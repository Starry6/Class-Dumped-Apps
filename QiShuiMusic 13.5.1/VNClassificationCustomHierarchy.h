@interface VNClassificationCustomHierarchy : NSObject
@property (nonatomic) NSDictionary relationships;
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
@property (nonatomic) Q requestRevision;
@property (nonatomic) NSString requestClassName;
- (id)requestClassName;
- (Class)requestClassAndReturnError:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)relationships;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)originatingRequestSpecifier;
- (id)initWithOriginatingRequestSpecifier:detectionLevel:;
- (id)hierarchicalModelAndReturnError:;
- (id)newHierarchicalModelAndReturnError:;
- (BOOL)_addRelationships:error:;
- (id)customHierarchyWithAdditionalParent:children:error:;
- (id)customHierarchyWithAdditionalRelationships:error:;
- (unsigned long long)requestDetectionLevel;
+ (BOOL)supportsSecureCoding;
+ (id)customHierarchyForRequest:error:;
@end
