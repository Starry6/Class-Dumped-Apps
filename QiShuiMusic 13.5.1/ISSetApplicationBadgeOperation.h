@interface ISSetApplicationBadgeOperation : ISOperation
@property (nonatomic) NSString badgeValue;
@property (nonatomic) NSString bundleIdentifier;
- (id)badgeValue;
- (id)uniqueKey;
- (id)bundleIdentifier;
- (void)run;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (void)setBadgeValue:;
@end
