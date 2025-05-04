@interface AWEGrouponShowHalfScreenShowStatus : NSObject
@property (nonatomic) AWEGrouponHalfScreenContainerModel halfScreenContainerModel;
@property (nonatomic) BOOL willShow;
@property (nonatomic) BOOL didShow;
- (void)setDidShow:;
- (void)setWillShow:;
- (void)setHalfScreenContainerModel:;
- (id)halfScreenContainerModel;
- (void).cxx_destruct;
- (BOOL)didShow;
- (BOOL)willShow;
@end
