@interface IESECLigoComponentManagerItem : NSObject
@property (nonatomic) @ component;
@property (nonatomic) IESECLigoComponentInitModel componentModel;
@property (nonatomic) @? didLoadBlock;
@property (nonatomic) @? didUnloadBlock;
@property (nonatomic) @? didUpdateBlock;
- (id)componentModel;
- (id)didLoadBlock;
- (id)didUnloadBlock;
- (id)didUpdateBlock;
- (void)setComponentModel:;
- (void)setDidLoadBlock:;
- (void)setDidUnloadBlock:;
- (void)setDidUpdateBlock:;
- (id)component;
- (void).cxx_destruct;
- (void)setComponent:;
@end
