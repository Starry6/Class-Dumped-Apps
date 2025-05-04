@interface AWEIMFansGroupManagementPlateInfoModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString plateHeaderViewTitle;
@property (nonatomic) NSString plateHeaderImageName;
@property (nonatomic) NSString plateFooterButtonTitle;
@property (nonatomic) BOOL moreMsg;
@property (nonatomic) BOOL hasUnreadMessages;
@property (nonatomic) BOOL shouldShowBusinessInfoEntry;
- (id)initWithPlateType:;
- (void)setMoreMsg:;
- (void)setHasUnreadMessages:;
- (void)setShouldShowBusinessInfoEntry:;
- (id)plateHeaderViewTitle;
- (id)plateHeaderImageName;
- (id)plateFooterButtonTitle;
- (void)__setupModel;
- (void)setPlateHeaderViewTitle:;
- (void)setPlateFooterButtonTitle:;
- (void)setPlateHeaderImageName:;
- (BOOL)moreMsg;
- (BOOL)shouldShowBusinessInfoEntry;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (BOOL)hasUnreadMessages;
@end
