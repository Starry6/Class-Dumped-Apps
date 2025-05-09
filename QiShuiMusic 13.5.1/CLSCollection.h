@interface CLSCollection : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDate dateClassCreated;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) NSString location;
@property (nonatomic) NSString iconID;
@property (nonatomic) NSString colorName;
- (unsigned long long)childCount;
- (void)setName:;
- (void)setColorName:;
- (void)setType:;
- (id)colorName;
- (id)initWithCoder:;
- (id)children;
- (id)location;
- (void)encodeWithCoder:;
- (long long)type;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)name;
- (id)dictionaryRepresentation;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)iconID;
- (void)setIconID:;
- (id)initWithObjectID:name:location:type:icon:;
- (unsigned long long)childCount:;
- (id)children:;
- (void)addCollectionItem:;
- (void)removeCollectionItem:;
- (void)setDateClassCreated:;
- (id)dateClassCreated;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
