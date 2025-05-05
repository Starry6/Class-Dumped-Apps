@interface IESECSKUCarAdaptViewModel : NSObject
@property (nonatomic) IESECSKUDetailContext detailContext;
@property (nonatomic) IESECSKUCarAdaptModel carAdaptInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSKUModel:detailContext:;
- (BOOL)canJumpToCarAdapt;
- (id)carAdaptInfo;
- (id)detailContext;
- (void)setCarAdaptInfo:;
- (void)setDetailContext:;
- (void)trackWithEventName:once:;
- (void).cxx_destruct;
- (BOOL)hasCar;
@end
