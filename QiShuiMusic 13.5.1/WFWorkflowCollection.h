@interface WFWorkflowCollection : WFDatabaseObjectDescriptor
@property (nonatomic) NSString name;
@property (nonatomic) S glyphCharacter;
@property (nonatomic) BOOL folder;
@property (nonatomic) BOOL deleted;
- (BOOL)isDeleted;
- (BOOL)isFolder;
- (id)initWithCoder:;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithIdentifier:isFolder:name:glyphCharacter:isDeleted:;
+ (BOOL)supportsSecureCoding;
@end
