@interface AWELuckyCatNetworkModel : MTLModel
@property (nonatomic) Q errNo;
@property (nonatomic) NSString errTips;
@property (nonatomic) NSDictionary data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)errNo;
- (void)setErrNo:;
- (id)errTips;
- (void)setErrTips:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
@end
