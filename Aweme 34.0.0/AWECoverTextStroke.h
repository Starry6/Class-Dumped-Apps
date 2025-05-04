@interface AWECoverTextStroke : MTLModel
@property (nonatomic) double width;
@property (nonatomic) NSString color;
@property (nonatomic) Q joinMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)joinMode;
- (void)setJoinMode:;
- (void)setWidth:;
- (id)color;
- (void)setColor:;
- (double)width;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
