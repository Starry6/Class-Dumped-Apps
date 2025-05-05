@interface MRTextEditingSession : NSObject
@property (nonatomic) Q uniqueIdentifier;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL editing;
@property (nonatomic) MRTextEditingAttributes attributes;
- (id)init;
- (BOOL)isEditing;
- (unsigned long long)uniqueIdentifier;
- (id)attributes;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)text;
- (id)copyWithZone:;
- (id)initWithText:attributes:;
@end
