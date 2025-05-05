@interface WKFoundTextPosition : UITextPosition
@property (nonatomic) Q offset;
@property (nonatomic) Q order;
- (void)setOffset:;
- (unsigned long long)order;
- (unsigned long long)offset;
- (void)setOrder:;
+ (id)textPositionWithOffset:order:;
@end
