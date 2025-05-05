@interface WBBookmarkLabel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString address;
@property (nonatomic) BOOL pinned;
@property (nonatomic) NSString privacyPreservingDescription;
- (id)init;
- (id)privacyPreservingDescription;
- (id)labelWithPinned:;
- (id)labelWithAddress:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithTitle:address:pinned:;
- (void)encodeWithCoder:;
- (id)title;
- (BOOL)isPinned;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (id)labelWithTitle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
