@interface CPContactTemplate : CPTemplate
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) CPContact contact;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray leadingNavigationBarButtons;
@property (nonatomic) NSArray trailingNavigationBarButtons;
@property (nonatomic) CPBarButton backButton;
- (id)entity;
- (id)initWithContact:;
- (id)contact;
- (void)setContact:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)performUpdate;
- (void).cxx_destruct;
- (void)handleActionForControlIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
