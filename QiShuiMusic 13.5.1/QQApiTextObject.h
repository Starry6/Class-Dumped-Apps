@interface QQApiTextObject : QQApiObject
@property (nonatomic) NSString text;
- (id)initWithText:tagName:messageExt:;
- (id)initWithText:;
- (void)setText:;
- (id)text;
+ (id)objectWithText:;
+ (id)objectWithText:tagName:messageExt:;
@end
