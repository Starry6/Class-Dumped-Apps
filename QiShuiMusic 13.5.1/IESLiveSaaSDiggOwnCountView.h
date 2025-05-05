@interface IESLiveSaaSDiggOwnCountView : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) @? animCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animCompletion;
- (void)setAnimCompletion:;
- (void)startPlayAnimationWithCompletion:;
- (id)textColorWithDiggCount:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)initWithCount:;
- (id)countLabel;
- (void)setCountLabel:;
@end
