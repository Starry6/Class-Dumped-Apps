@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerItemLeafRepresentation
@property (nonatomic) NSURL url;
- (id)url;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEquivalent:;
- (void)setURL:;
- (id)copyWithZone:;
- (id)initWithTitle:uniqueIdentifier:;
- (id)initWithURL:title:uniqueIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
