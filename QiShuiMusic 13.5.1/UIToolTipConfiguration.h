@interface UIToolTipConfiguration : NSObject
@property (nonatomic) NSString toolTip;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} sourceRect;
- (id)sourceRect;
- (void)setSourceRect:;
- (void).cxx_destruct;
- (id)toolTip;
- (void)setToolTip:;
+ (id)configurationWithToolTip:;
+ (id)configurationWithToolTip:inRect:;
@end
