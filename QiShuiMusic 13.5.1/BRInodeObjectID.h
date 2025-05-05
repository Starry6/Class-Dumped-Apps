@interface BRInodeObjectID : BRFileObjectID
- (id)initWithFileID:;
- (id)folderID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isFpfsItem;
- (unsigned long long)rawID;
- (unsigned char)type;
- (id)description;
- (id)asString;
- (BOOL)isFolderOrAliasID;
+ (BOOL)supportsSecureCoding;
@end
