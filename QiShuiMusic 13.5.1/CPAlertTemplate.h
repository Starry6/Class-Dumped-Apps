@interface CPAlertTemplate : CPTemplate
@property (nonatomic) <CPAlertDelegate> templateDelegate;
@property (nonatomic) NSArray titleVariants;
@property (nonatomic) NSArray actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (void)_addAction:;
- (id)titleVariants;
- (void)handleAlertActionForIdentifier:;
- (id)initWithTitleVariants:actions:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)maximumActionCount;
@end
