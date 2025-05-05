@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject
@property (nonatomic) NSArray leadingButtonTypes;
@property (nonatomic) NSArray trailingButtonTypes;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToArrangement:;
- (id)initWithLeadingButtonTypes:trailingButtonTypes:;
- (id)initUsingButtonLayout:filteringButtonsUsingBlock:;
- (BOOL)containsButtonType:;
- (id)leadingButtonTypes;
- (id)trailingButtonTypes;
@end
