@interface IESLivePKChatGuestListViewConfig : NSObject
@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) IESLivePKInteractUserService userService;
@property (nonatomic) <IESLivePKChatGuestListViewDelegate> delegate;
@property (nonatomic) q role;
- (void)setUserService:;
- (double)itemPortraitSpace;
- (void)setItemPortraitSpace:;
- (id)userService;
- (void)setFrame:;
- (void)setDelegate:;
- (id)frame;
- (void)setItemWidth:;
- (void)setRole:;
- (double)itemWidth;
- (id)delegate;
- (void).cxx_destruct;
- (long long)role;
- (double)itemHeight;
- (void)setAppData:;
- (id)appData;
- (void)setItemHeight:;
@end
