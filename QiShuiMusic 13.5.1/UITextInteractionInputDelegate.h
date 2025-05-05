@interface UITextInteractionInputDelegate : NSObject
@property (nonatomic) UITextInteraction rootInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)selectionDidChange:;
- (void)textWillChange:;
- (void)textDidChange:;
- (void)selectionWillChange:;
- (id)rootInteraction;
- (void).cxx_destruct;
- (void)setRootInteraction:;
@end
