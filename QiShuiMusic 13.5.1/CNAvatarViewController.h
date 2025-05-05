@interface CNAvatarViewController : UIViewController
@property (nonatomic) <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) BOOL allowStaleRendering;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) <CNAvatarViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray contacts;
@property (nonatomic) UIView view;
@property (nonatomic) <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
- (void)updateViewWithGroupIdentity:;
- (void)setAllowStaleRendering:;
- (id)descriptorForRequiredKeys;
- (id)initWithCoder:;
- (id)initWithSettings:;
- (void).cxx_destruct;
- (BOOL)allowStaleRendering;
- (id)initWithNibName:bundle:;
- (id)objectViewControllerDelegate;
- (void)setObjectViewControllerDelegate:;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:;
+ (Class)defaultImplementation;
@end
