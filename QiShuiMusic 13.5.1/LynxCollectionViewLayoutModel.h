@interface LynxCollectionViewLayoutModel : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (id)init;
- (void)setFrame:;
- (id)frame;
- (id)copyWithZone:;
+ (id)modelWithWidth:;
+ (id)modelWithBounds:;
+ (id)modelWithDefaultSize;
+ (id)modelWithHeight:;
+ (double)defaultHeight;
+ (double)defaultWidth;
@end
