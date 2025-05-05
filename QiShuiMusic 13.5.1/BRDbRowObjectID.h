@interface BRDbRowObjectID : BRFileObjectID
- (id)initWithRowID:type:;
- (id)folderID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isFpfsItem;
- (unsigned long long)rawID;
- (unsigned char)type;
- (id)description;
- (id)asString;
- (id)documentID;
+ (BOOL)supportsSecureCoding;
@end
