@interface IXUninstallOptions : NSObject
@property (nonatomic) BOOL requestUserConfirmation;
@property (nonatomic) BOOL waitForDeletion;
@property (nonatomic) BOOL showArchiveOption;
@property (nonatomic) BOOL showDemotionOption;
@property (nonatomic) BOOL systemAppNotAllowed;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRequestUserConfirmation:;
- (void)setShowArchiveOption:;
- (BOOL)requestUserConfirmation;
- (BOOL)waitForDeletion;
- (void)setWaitForDeletion:;
- (BOOL)showArchiveOption;
- (BOOL)showDemotionOption;
- (void)setShowDemotionOption:;
- (BOOL)systemAppNotAllowed;
- (void)setSystemAppNotAllowed:;
+ (BOOL)supportsSecureCoding;
@end
