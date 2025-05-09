@interface MKSearchFoundationResult : SFSearchResult
@property (nonatomic) NSData mapsData;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) Q iconSize;
@property (nonatomic) Q mksfResultType;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) NSString bundleID;
@property (nonatomic) MKLocationManager locationManager;
@property (nonatomic) MKSearchFoundationRichText secondLineDisplayedText;
@property (nonatomic) MKSearchFoundationBusinessHoursAndDistanceRichText thirdLineDisplayedText;
@property (nonatomic) MKSearchFoundationRichText fourthLineDisplayedText;
@property (nonatomic) NSMutableArray thirdLineText;
@property (nonatomic) BOOL optionSmallerScreen;
@property (nonatomic) @ attributionObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapItem;
- (void)_commonInit;
- (void)setThumbnail:;
- (void)setIconSize:;
- (unsigned long long)iconSize;
- (void)dealloc;
- (void)setLocationManager:;
- (void)setMapItem:;
- (void)locationManagerDidPauseLocationUpdates:;
- (id)action;
- (void)setTitle:;
- (void)setAction:;
- (id)bundle;
- (id)thumbnail;
- (void)locationManager:didUpdateVehicleHeading:timestamp:;
- (id)title;
- (void)locationManager:didUpdateVehicleSpeed:timestamp:;
- (void)locationManagerDidResumeLocationUpdates:;
- (id)locationManager;
- (void).cxx_destruct;
- (id)bundleID;
- (void)setBundle:;
- (void)setBundleID:;
- (id)mapsData;
- (void)setMapsData:;
- (void)locationManagerUpdatedLocation:;
- (void)locationManagerFailedToUpdateLocation:withError:;
- (void)locationManagerDidReset:;
- (BOOL)locationManagerShouldPauseLocationUpdates:;
- (void)_locationApprovalDidChange;
- (id)initWithMapsData:iconSize:bundleID:;
- (id)_populateButtonItemsAndCommands;
- (id)_populateAppClipData:;
- (id)_populateButtonItem:imageName:command:;
- (id)_defaultRichTextItems;
- (id)_appleRatingsDescription;
- (id)_businessReviewText;
- (id)_businessAddress;
- (id)_businessCategory;
- (id)_brandURL;
- (id)_businessHoursAndDistance;
- (BOOL)_isSmallerScreen;
- (id)secondLineDisplayedText;
- (void)setSecondLineDisplayedText:;
- (id)descriptions;
- (void)setDescriptions:;
- (id)thirdLineDisplayedText;
- (void)setThirdLineDisplayedText:;
- (unsigned long long)mksfResultType;
- (void)setMksfResultType:;
- (id)fourthLineDisplayedText;
- (void)setFourthLineDisplayedText:;
- (id)thirdLineText;
- (void)setThirdLineText:;
- (BOOL)optionSmallerScreen;
- (void)setOptionSmallerScreen:;
- (id)attributionObserver;
- (void)setAttributionObserver:;
+ (id)styledStringFromStringArray:;
@end
