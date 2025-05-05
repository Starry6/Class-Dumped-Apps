@interface UIKBSplitTraits : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} leftFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rightFrame;
@property (nonatomic) Q corners;
- (unsigned long long)corners;
- (id)initWithLeftFrame:rightFrame:corners:;
- (id)leftFrame;
- (id)rightFrame;
+ (id)traitsWithLeftFrame:rightFrame:corners:;
@end
