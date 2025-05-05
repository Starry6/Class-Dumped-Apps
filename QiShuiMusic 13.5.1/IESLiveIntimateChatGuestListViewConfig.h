@interface IESLiveIntimateChatGuestListViewConfig : NSObject
@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemSideLength;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) IESLiveMultiInteractUserService userService;
@property (nonatomic) <IESLiveIntimateChatGuestListViewDelegate> delegate;
- (void)setUserService:;
- (double)itemPortraitSpace;
- (double)itemSideLength;
- (void)setItemPortraitSpace:;
- (void)setItemSideLength:;
- (id)userService;
- (void)setFrame:;
- (void)setDelegate:;
- (id)frame;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAppData:;
- (id)appData;
@end
