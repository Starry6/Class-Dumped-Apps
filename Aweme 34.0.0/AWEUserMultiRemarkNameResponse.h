@interface AWEUserMultiRemarkNameResponse : AWEBaseApiModel
@property (nonatomic) NSArray failUIDs;
@property (nonatomic) NSArray bizFailUIDs;
- (id)bizFailUIDs;
- (id)failUIDs;
- (void)setFailUIDs:;
- (void)setBizFailUIDs:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
