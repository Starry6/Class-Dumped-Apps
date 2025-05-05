@interface VKCElementInfo : VKCBaseElement
@property (nonatomic) NSString text;
- (void)setText:;
- (id)children;
- (id)stringValue;
- (void).cxx_destruct;
- (id)text;
+ (id)infoWithText:parent:;
@end
