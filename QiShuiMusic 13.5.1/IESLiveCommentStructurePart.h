@interface IESLiveCommentStructurePart : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString contentValue;
@property (nonatomic) q position;
@property (nonatomic) q length;
- (void)setContentValue:;
- (void)setPosition:;
- (long long)position;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (long long)length;
- (void)setLength:;
- (id)contentValue;
+ (id)initWithType:conentValue:position:length:;
@end
