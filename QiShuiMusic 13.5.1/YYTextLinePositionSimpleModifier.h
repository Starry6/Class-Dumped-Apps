@interface YYTextLinePositionSimpleModifier : NSObject
@property (nonatomic) double fixedLineHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)fixedLineHeight;
- (void)modifyLines:fromText:inContainer:;
- (void)setFixedLineHeight:;
- (id)copyWithZone:;
@end
