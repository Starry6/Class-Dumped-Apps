@interface WBBookmarkLocation : NSObject
@property (nonatomic) NSInteger parentID;
@property (nonatomic) WBSCRDTPosition position;
- (id)position;
- (id)init;
- (id)locationWithPosition:;
- (id)locationWithParentID:;
- (int)parentID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParentID:position:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
