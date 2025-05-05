@interface ASCLockupProductDetailsPresentationContext : NSObject
@property (nonatomic) q presentationStyle;
- (long long)presentationStyle;
- (id)initWithPresentationStyle:;
+ (id)defaultPresentationContext;
@end
