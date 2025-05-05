@interface CUIColor : NSObject
@property (nonatomic) ^{CGColor=} CGColor;
- (void)dealloc;
- (id)initWithCIColor:;
- (id)initWithCGColor:;
- (id)CGColor;
- (id)description;
- (id)copyWithZone:;
- (id)colorUsingCGColorSpace:;
+ (id)colorWithCGColor:;
+ (id)colorWithCIColor:;
@end
