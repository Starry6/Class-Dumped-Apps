@interface MPModelPlaylistEntryKind : MPModelKind
@property (nonatomic) NSArray kinds;
- (id)humanDescription;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)kinds;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithKinds:;
+ (id)identityKind;
@end
