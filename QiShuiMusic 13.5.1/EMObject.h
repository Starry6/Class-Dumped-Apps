@interface EMObject : NSObject
@property (nonatomic) EMObjectID objectID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_publicDescription;
- (id)ef_publicDescription;
- (id)objectID;
- (void)setObjectID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithObjectID:;
- (void)_commonInitWithObjectID:;
+ (BOOL)supportsSecureCoding;
@end
