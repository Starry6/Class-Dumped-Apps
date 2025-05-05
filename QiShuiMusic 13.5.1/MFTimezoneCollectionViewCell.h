@interface MFTimezoneCollectionViewCell : UICollectionViewListCell
@property (nonatomic) UICellAccessoryLabel timeZoneLabel;
@property (nonatomic) NSString currentCityName;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setCurrentCityName:;
- (void)_configureWithCityName:;
- (id)currentCityName;
- (id)timeZoneLabel;
- (void)setTimeZoneLabel:;
+ (id)reusableIdentifier;
@end
