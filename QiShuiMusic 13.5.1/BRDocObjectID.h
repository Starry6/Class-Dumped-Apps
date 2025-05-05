@interface BRDocObjectID : BRFileObjectID
- (id)initWithCoder:;
- (id)initWithDocIDNumber:;
- (id)initWithDocID:;
- (void)encodeWithCoder:;
- (BOOL)isFpfsItem;
- (unsigned long long)rawID;
- (unsigned char)type;
- (id)description;
- (id)asString;
- (BOOL)isDocumentID;
- (id)documentID;
+ (BOOL)supportsSecureCoding;
@end
