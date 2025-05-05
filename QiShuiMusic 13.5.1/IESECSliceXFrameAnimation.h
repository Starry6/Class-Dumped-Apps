@interface IESECSliceXFrameAnimation : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) IESECSliceXFrameAnimatableStyle startStyle;
@property (nonatomic) IESECSliceXFrameAnimatableStyle endStyle;
- (id)endStyle;
- (void)setEndStyle:;
- (void)setStartStyle:;
- (id)startStyle;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
@end
