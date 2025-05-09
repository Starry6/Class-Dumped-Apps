@interface UIAccessibilityCustomAction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) UIImage image;
@property (nonatomic) NSAttributedString attributedName;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) @? actionHandler;
- (SEL)selector;
- (id)init;
- (void)setSelector:;
- (void)setName:;
- (void)setImage:;
- (void)setTarget:;
- (void)setActionHandler:;
- (id)actionHandler;
- (void).cxx_destruct;
- (id)target;
- (id)name;
- (id)image;
- (id)initWithName:image:target:selector:;
- (id)initWithAttributedName:image:target:selector:;
- (id)initWithName:image:actionHandler:;
- (id)initWithAttributedName:image:actionHandler:;
- (id)initWithName:target:selector:;
- (id)initWithAttributedName:target:selector:;
- (id)initWithName:actionHandler:;
- (id)initWithAttributedName:actionHandler:;
- (void)setAttributedName:;
- (id)attributedName;
@end
