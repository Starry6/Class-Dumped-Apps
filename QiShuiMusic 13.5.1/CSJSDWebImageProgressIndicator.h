@interface CSJSDWebImageProgressIndicator : NSObject
@property (nonatomic) UIProgressView indicatorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startAnimatingIndicator;
- (void)stopAnimatingIndicator;
- (void)updateIndicatorProgress:;
- (id)init;
- (void)commonInit;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:;
+ (id)barIndicator;
+ (id)defaultIndicator;
@end
