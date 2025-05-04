@interface AWETopBlendingViewItem : NSObject
@property (nonatomic) double from;
@property (nonatomic) double to;
@property (nonatomic) UIColor color;
@property (nonatomic) double zorder;
@property (nonatomic) AWETopBlendingView blendingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)zorder;
- (id)initWithColor:fromPosition:toPostion:;
- (void)setZorder:;
- (id)blendingView;
- (void)updateNormalizedRangeFrom:to:;
- (void)removeFromContainer;
- (void)setBlendingView:;
- (id)color;
- (void)setColor:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setFrom:;
- (double)from;
- (void)setTo:;
- (double)to;
@end
