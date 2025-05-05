@interface MKTransitIncidentSymbolImageCell : MKCustomSeparatorCell
@property (nonatomic) MKTransitIncidentViewModel viewModel;
@property (nonatomic) q cellPosition;
@property (nonatomic) BOOL padBottom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setCellPosition:;
- (void)setViewModel:;
- (void)_updateAppearance;
- (void)configureWithIncident:referenceDate:shouldShowImage:inSiri:;
- (void)configureWithIncidentMessage:referenceDate:shouldShowImage:inSiri:;
- (void)configureWithMessage:incident:referenceDate:shouldShowImage:inSiri:;
- (long long)cellPosition;
- (BOOL)padBottom;
- (void)setPadBottom:;
- (void)_configureWithMessage:referenceDate:lastUpdated:incidentIsBlocking:shouldShowImage:inSiri:;
@end
