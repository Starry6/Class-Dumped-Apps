@interface MRMutableApplicationActivity : MRApplicationActivity
@property (nonatomic) NSString primaryApplicationDisplayID;
@property (nonatomic) NSString secondaryApplicationDisplayID;
@property (nonatomic) NSInteger status;
- (void)setStatus:;
- (void)setSecondaryApplicationDisplayID:;
- (void)setPrimaryApplicationDisplayID:;
+ (BOOL)supportsSecureCoding;
@end
