@interface AWESSUCEventModel : AWEBaseApiModel
@property (nonatomic) NSString showName;
@property (nonatomic) NSString clickName;
@property (nonatomic) NSDictionary logpb;
- (id)logpb;
- (void)setLogpb:;
- (void)setClickName:;
- (id)clickName;
- (void).cxx_destruct;
- (void)setShowName:;
- (id)showName;
+ (id)JSONKeyPathsByPropertyKey;
@end
