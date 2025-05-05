@interface AVMediaSelectionMenuController : NSObject
@property (nonatomic) <AVMediaSelectionMenuDelegate> delegate;
@property (nonatomic) NSArray audibleOptions;
@property (nonatomic) NSArray legibleOptions;
@property (nonatomic) Q currentAudibleOptionIndex;
@property (nonatomic) Q currentLegibleOptionIndex;
@property (nonatomic) UIMenu audibleOptionsMenu;
@property (nonatomic) UIMenu legibleOptionsMenu;
- (id)legibleOptions;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithAudibleOptions:legibleOptions:;
- (void)setAudibleOptions:;
- (void)setLegibleOptions:;
- (void)setCurrentAudibleOptionIndex:;
- (void)setCurrentLegibleOptionIndex:;
- (id)audibleOptionsMenu;
- (id)legibleOptionsMenu;
- (id)_menuForOptions:withIdentifier:;
- (void)_updateSelectionStateForMenu:selectedIndex:;
- (id)audibleOptions;
- (unsigned long long)currentAudibleOptionIndex;
- (unsigned long long)currentLegibleOptionIndex;
@end
