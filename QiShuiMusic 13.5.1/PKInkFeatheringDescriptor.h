@interface PKInkFeatheringDescriptor : NSObject
@property (nonatomic) double startCapTime;
@property (nonatomic) double startCapDistance;
@property (nonatomic) double startCapFade;
@property (nonatomic) double startCapShrink;
@property (nonatomic) double endCapTime;
@property (nonatomic) double endCapDistance;
@property (nonatomic) double endCapFade;
@property (nonatomic) double endCapShrink;
- (id)mutableCopy;
- (id)initWithStartCapTime:startCapDistance:startCapFade:startCapShrink:endCapTime:endCapDistance:endCapFade:endCapShrink:;
- (double)startCapTime;
- (void)setStartCapTime:;
- (double)startCapDistance;
- (void)setStartCapDistance:;
- (double)startCapFade;
- (void)setStartCapFade:;
- (double)startCapShrink;
- (void)setStartCapShrink:;
- (double)endCapTime;
- (void)setEndCapTime:;
- (double)endCapDistance;
- (void)setEndCapDistance:;
- (double)endCapFade;
- (void)setEndCapFade:;
- (double)endCapShrink;
- (void)setEndCapShrink:;
+ (id)descriptorWithStartCapTime:startCapFade:endCapTime:endCapFade:;
@end
