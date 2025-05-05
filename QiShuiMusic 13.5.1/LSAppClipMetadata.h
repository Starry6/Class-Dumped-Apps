@interface LSAppClipMetadata : NSObject
@property (nonatomic) NSArray parentApplicationIdentifiers;
@property (nonatomic) BOOL wantsEphemeralNotifications;
@property (nonatomic) BOOL wantsLocationConfirmation;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)wantsEphemeralNotifications;
- (id)_initWithApplicationRecord:parentApplicationIdentifiers:appClipPlist:;
- (BOOL)wantsLocationConfirmation;
- (id)parentApplicationIdentifiers;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
