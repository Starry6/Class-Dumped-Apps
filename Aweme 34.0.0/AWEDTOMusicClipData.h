@interface AWEDTOMusicClipData : MTLModel
@property (nonatomic) double duration;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL disable;
@property (nonatomic) double start;
@property (nonatomic) double attach;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisable:;
- (void)setStart:;
- (BOOL)disable;
- (double)attach;
- (void)setDuration:;
- (void)setRepeatCount:;
- (double)duration;
- (double)repeatCount;
- (double)start;
- (void)setAttach:;
+ (id)JSONKeyPathsByPropertyKey;
@end
