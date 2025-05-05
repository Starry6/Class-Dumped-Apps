@interface SKReferenceNode : SKNode
@property (nonatomic) NSString referenceFileName;
@property (nonatomic) NSURL referenceURL;
- (id)init;
- (id)referenceURL;
- (id)initWithURL:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)resolvedNode;
- (id)initWithFileNamed:;
- (void)setReferenceFileName:;
- (id)referenceFileName;
- (void)setReferenceURL:;
- (id)_resolveReferenceNode;
- (void)resolveReferenceNode;
- (void)resolveNodeFromArchiveData:;
- (void)didLoadReferenceNode:;
+ (BOOL)supportsSecureCoding;
+ (id)referenceNodeWithURL:;
+ (id)referenceNodeWithFileNamed:;
+ (id)nodeWithFileNamed:;
@end
