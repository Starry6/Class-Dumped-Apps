@interface MKTransitItemIncidentCell : MKCustomSeparatorCell
@property (nonatomic) q cellPosition;
@property (nonatomic) BOOL padBottom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (id)initWithReuseIdentifier:;
- (void).cxx_destruct;
- (void)setCellPosition:;
- (void)setSeparatorHidden:;
- (void)setLeadingSeparatorInset:;
- (void)setTrailingSeparatorInset:;
- (void)configureWithIncident:referenceDate:shouldShowImage:inSiri:;
- (void)configureWithIncidentMessage:referenceDate:shouldShowImage:inSiri:;
- (void)configureWithMessage:incident:referenceDate:shouldShowImage:inSiri:;
- (long long)cellPosition;
- (BOOL)padBottom;
- (void)setPadBottom:;
- (void)_configureViews;
- (void)_updateIncidentViewBottomOffset;
@end
