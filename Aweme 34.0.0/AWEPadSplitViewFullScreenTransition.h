@interface AWEPadSplitViewFullScreenTransition : NSObject
@property (nonatomic) double width;
@property (nonatomic) @? willCancelBlock;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)willCancelBlock;
- (id)initWithSecondaryWidth:;
- (void)setWillCancelBlock:;
- (void)setWidth:;
- (void)setCancelBlock:;
- (double)width;
- (double)transitionDuration:;
- (void)animateTransition:;
- (void).cxx_destruct;
- (id)cancelBlock;
@end
