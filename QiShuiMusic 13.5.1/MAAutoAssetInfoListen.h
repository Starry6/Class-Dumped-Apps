@interface MAAutoAssetInfoListen : NSObject
@property (nonatomic) MAAutoAssetNotifications activeNotifications;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNotifications:;
- (id)activeNotifications;
+ (BOOL)supportsSecureCoding;
@end
