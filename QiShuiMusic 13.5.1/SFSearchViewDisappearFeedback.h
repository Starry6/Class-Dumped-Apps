@interface SFSearchViewDisappearFeedback : SFFeedback
@property (nonatomic) q viewDisappearEvent;
- (long long)viewDisappearEvent;
- (void)setViewDisappearEvent:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithEvent:;
+ (BOOL)supportsSecureCoding;
@end
