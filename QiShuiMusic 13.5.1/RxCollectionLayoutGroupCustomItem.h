@interface RxCollectionLayoutGroupCustomItem : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) q zIndex;
- (void)setFrame:;
- (id)frame;
- (void)setZIndex:;
- (long long)zIndex;
- (id)copyWithZone:;
- (id)initWithFrame:zIndex:;
+ (id)customItemWithFrame:;
+ (id)customItemWithFrame:zIndex:;
@end
