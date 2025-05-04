@interface AWETransformerLayoutFlexAttributes : NSObject
@property (nonatomic) Q flexDirection;
@property (nonatomic) Q justifyContent;
@property (nonatomic) Q alignItems;
- (void)setFlexDirection:;
- (void)setAlignItems:;
- (void)setJustifyContent:;
- (unsigned long long)flexDirection;
- (unsigned long long)alignItems;
- (unsigned long long)justifyContent;
@end
