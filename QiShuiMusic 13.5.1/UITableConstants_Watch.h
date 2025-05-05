@interface UITableConstants_Watch : UITableConstants_Phone
- (id)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:cellConfigurationState:traitCollection:floating:;
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:;
- (id)defaultCheckmarkImageForCell:;
- (BOOL)useChromelessSectionHeadersAndFootersForTableStyle:;
+ (id)sharedConstants;
@end
