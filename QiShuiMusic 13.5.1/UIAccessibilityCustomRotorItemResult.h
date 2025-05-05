@interface UIAccessibilityCustomRotorItemResult : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) <NSObject> targetElement;
@property (nonatomic) UITextRange targetRange;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
- (id)targetElement;
- (void)setTargetElement:;
- (id)initWithTargetElement:targetRange:;
- (id)targetRange;
- (void)setTargetRange:;
@end
