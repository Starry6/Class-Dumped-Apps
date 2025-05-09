@interface IESLiveSaaSVSFeedChainCellModel : NSObject
@property (nonatomic) NSString ieslive_accessibilityName;
@property (nonatomic) # cellClass;
@property (nonatomic) q cellStyle;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) IESLiveSaaSVSFeedChainMatchModel matchModel;
@property (nonatomic) IESLiveSaaSFeedDrawerViewControllerContext context;
@property (nonatomic) Q cameraType;
@property (nonatomic) NSString cameraIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray coverURLs;
@property (nonatomic) double titleHeight;
@property (nonatomic) NSArray labelURLs;
@property (nonatomic) NSArray officalLabelURLs;
@property (nonatomic) NSString drawerOfficialLabelText;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
- (void)setEnterMethod:;
- (id)cameraIdStr;
- (id)coverURLs;
- (id)diffIdentifier;
- (id)drawerOfficialLabelText;
- (id)enterFrom;
- (id)enterMethod;
- (id)ieslive_accessibilityName;
- (id)initWithFeedItem:;
- (BOOL)isEqualToDiffableObject:;
- (id)labelURLs;
- (id)matchModel;
- (id)officalLabelURLs;
- (void)setDrawerOfficialLabelText:;
- (void)setEnterFrom:;
- (void)setIeslive_accessibilityName:;
- (void)setMatchModel:;
- (id)shadowText:;
- (void)setTitleHeight:;
- (double)titleHeight;
- (id)context;
- (id)desc;
- (unsigned long long)cameraType;
- (id)title;
- (long long)cellStyle;
- (void).cxx_destruct;
- (void)setContext:;
- (Class)cellClass;
- (id)room;
- (Class)sectionClass;
@end
