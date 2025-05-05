@interface CPGridTemplate : CPTemplate
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) NSArray gridButtons;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray leadingNavigationBarButtons;
@property (nonatomic) NSArray trailingNavigationBarButtons;
@property (nonatomic) CPBarButton backButton;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void)performUpdate;
- (void).cxx_destruct;
- (void)updateTitle:;
- (void)handleActionForControlIdentifier:;
- (id)initWithTitle:gridButtons:;
- (id)_prepareButtons:;
- (void)updateGridButtons:;
- (id)gridButtons;
+ (BOOL)supportsSecureCoding;
@end
