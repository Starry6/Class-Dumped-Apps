@interface IESECHalfPageFloatContainerStore : NSObject
@property (nonatomic) UIView container;
@property (nonatomic) <IESECHalfPageFloatContainerDelegate> delegate;
- (void)setContainer:;
- (void)setDelegate:;
- (id)container;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithContainer:delegate:;
@end
