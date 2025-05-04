@interface AWEMemoriesPlayerBottomBarViewModel : NSObject
@property (nonatomic) <AWEMemoriesPlayerBottomBarViewModelDelegate> delegate;
@property (nonatomic) AWEMemoriesPlayerContext playerContext;
@property (nonatomic) NSString hintText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hintText;
- (id)playerContext;
- (void)setPlayerContext:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)bottomBarHeight;
- (void)setHintText:;
@end
