@interface AVMobileAuxiliaryControl : NSObject
@property (nonatomic) <AVMobileAuxiliaryControlDelegate> delegate;
@property (nonatomic) UIView controlView;
@property (nonatomic) q displayPriority;
@property (nonatomic) BOOL included;
@property (nonatomic) NSString identifier;
- (long long)displayPriority;
- (BOOL)canOnlyAppearInOverflowMenu;
- (void)setDelegate:;
- (id)identifier;
- (id)delegate;
- (void)setIncluded:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isIncluded;
- (id)controlView;
+ (id)controlWithView:displayPriority:identifier:;
+ (id)controlWithDisplayPriority:identifier:;
@end
