@interface MNButtonActionTitle : NSObject
@property (nonatomic) Q action;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger buttonDisplay;
- (unsigned long long)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (int)buttonDisplay;
- (id)initWithAction:withTitle:buttonDisplay:;
+ (BOOL)supportsSecureCoding;
@end
