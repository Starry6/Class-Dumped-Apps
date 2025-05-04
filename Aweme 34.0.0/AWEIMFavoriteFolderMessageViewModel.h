@interface AWEIMFavoriteFolderMessageViewModel : NSObject
@property (nonatomic) AWEIMFavoriteFolderMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)titleNumberOfLines;
- (id)initWithMessage:conversation:;
- (id)supportMenuItems;
- (BOOL)shouldRefreshMessageInfo;
- (void)traceCellWillDisplay;
- (id)coverImageString;
- (long long)coverImageContentMode;
- (id)coverImageBackgroudColor;
- (id)disableTitleString;
- (id)disableSubTitleString;
- (BOOL)isDisableState;
- (void)didTapContainerView;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)detailString;
- (id)conversation;
- (void)setConversation:;
- (id)titleString;
@end
