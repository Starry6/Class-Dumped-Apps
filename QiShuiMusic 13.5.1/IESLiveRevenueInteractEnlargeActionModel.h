@interface IESLiveRevenueInteractEnlargeActionModel : NSObject
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL canShowSelfLargeItem;
@property (nonatomic) BOOL canShowAdminLargeItem;
@property (nonatomic) BOOL isInSelfEnlarge;
@property (nonatomic) BOOL isInAdminEnlarge;
@property (nonatomic) BOOL isLargeNotFocus;
@property (nonatomic) BOOL canActionLarge;
- (BOOL)isInSelfEnlarge;
- (BOOL)isLargeNotFocus;
- (BOOL)canActionLarge;
- (BOOL)canShowAdminLargeItem;
- (BOOL)canShowSelfLargeItem;
- (id)initWithDIContext:;
- (BOOL)isInAdminEnlarge;
- (void)setCanActionLarge:;
- (void)setCanShowAdminLargeItem:;
- (void)setCanShowSelfLargeItem:;
- (void)setIsAdmin:;
- (void)setIsInAdminEnlarge:;
- (void)setIsInSelfEnlarge:;
- (void)setIsLargeNotFocus:;
- (BOOL)isAdmin;
@end
