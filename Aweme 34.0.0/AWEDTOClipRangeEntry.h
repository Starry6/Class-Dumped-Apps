@interface AWEDTOClipRangeEntry : MTLModel
@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStart:;
- (void)setDuration:;
- (double)duration;
- (double)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
