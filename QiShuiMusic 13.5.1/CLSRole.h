@interface CLSRole : CLSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray privileges;
@property (nonatomic) q sourceType;
@property (nonatomic) BOOL isEditable;
- (void)setIsEditable:;
- (long long)sourceType;
- (void)setPrivileges:;
- (id)privileges;
- (void)setType:;
- (void)setSourceType:;
- (id)initWithCoder:;
- (BOOL)isEditable;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
+ (BOOL)supportsSecureCoding;
+ (id)stringForRoleType:;
@end
