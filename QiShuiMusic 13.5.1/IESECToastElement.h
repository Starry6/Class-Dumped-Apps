@interface IESECToastElement : MTLModel
@property (nonatomic) IESECTextWithIconElement content;
@property (nonatomic) double duration;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (id)trackParams;
- (id)content;
- (void)setContent:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
