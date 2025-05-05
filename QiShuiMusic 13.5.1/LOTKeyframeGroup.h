@interface LOTKeyframeGroup : NSObject
@property (nonatomic) NSArray keyframes;
- (void)buildKeyframesFromData:;
- (void)remapKeyframesWithBlock:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)keyframes;
@end
