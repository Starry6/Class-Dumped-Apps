@interface MKIncidentDetailCell : MKTableViewCell
@property (nonatomic) NSString title;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString incidentDescription;
@property (nonatomic) NSDate lastUpdated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithReuseIdentifier:;
- (void)setLastUpdated:;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)lastUpdated;
- (id)icon;
- (void)setTitle:;
- (id)title;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void)infoCardThemeChanged;
- (void)_updateConstraintValues;
- (void)_setConstraints;
- (void)setIncidentDescription:;
- (id)incidentDescription;
- (void)_updateLastUpdatedLabel;
@end
