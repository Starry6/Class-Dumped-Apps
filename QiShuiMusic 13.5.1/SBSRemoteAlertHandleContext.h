@interface SBSRemoteAlertHandleContext : NSObject
@property (nonatomic) NSString handleID;
@property (nonatomic) BOOL active;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setActive:;
- (BOOL)isActive;
- (id)handleID;
- (id)initWithHandleID:;
+ (BOOL)supportsSecureCoding;
@end
