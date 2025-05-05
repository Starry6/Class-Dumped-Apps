@interface UIAccessibilityCustomRotor : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) @ targetElement;
@property (nonatomic) q systemRotorType;
@property (nonatomic) NSString name;
@property (nonatomic) NSAttributedString attributedName;
@property (nonatomic) @? itemSearchBlock;
- (void)setName:;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
- (id)name;
- (void)setAttributedName:;
- (id)attributedName;
- (id)initWithName:itemSearchBlock:;
- (id)initWithAttributedName:itemSearchBlock:;
- (id)initWithSystemType:itemSearchBlock:;
- (id)targetElement;
- (void)setTargetElement:;
- (long long)systemRotorType;
- (void)setSystemRotorType:;
- (id)itemSearchBlock;
- (void)setItemSearchBlock:;
@end
