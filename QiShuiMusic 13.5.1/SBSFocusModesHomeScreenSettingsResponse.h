@interface SBSFocusModesHomeScreenSettingsResponse : NSObject
@property (nonatomic) NSArray snapshots;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)snapshots;
- (id)initWithSnapshots:;
- (void)setSnapshots:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
