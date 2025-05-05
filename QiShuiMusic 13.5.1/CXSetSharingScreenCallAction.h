@interface CXSetSharingScreenCallAction : CXCallAction
@property (nonatomic) BOOL sharingScreen;
@property (nonatomic) CXScreenShareAttributes attributes;
- (id)initWithCoder:;
- (void)setAttributes:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)setSharingScreen:;
- (BOOL)isSharingScreen;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithCallUUID:sharingScreen:;
+ (BOOL)supportsSecureCoding;
@end
