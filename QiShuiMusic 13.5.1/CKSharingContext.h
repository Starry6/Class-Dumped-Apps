@interface CKSharingContext : NSObject
@property (nonatomic) CKShare share;
@property (nonatomic) CKContainerSetupInfo containerSetupInfo;
@property (nonatomic) CKAllowedSharingOptions allowedOptions;
- (void)setShare:;
- (id)share;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithShare:containerSetupInfo:allowedOptions:;
- (id)containerSetupInfo;
- (void)setContainerSetupInfo:;
- (id)allowedOptions;
- (void)setAllowedOptions:;
+ (BOOL)supportsSecureCoding;
@end
