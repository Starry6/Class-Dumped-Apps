@interface CRSDashboardFocusableItem : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frameInWindow;
@property (nonatomic) UIView<CRSUIDashboardFocusableItemProviding> focusProvidingItem;
- (id)init;
- (id)frameInWindow;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setFrameInWindow:;
- (void)setIdentifier:;
- (id)initWithFocusableView:;
- (id)focusProvidingItem;
- (void)setFocusProvidingItem:;
+ (BOOL)supportsSecureCoding;
@end
