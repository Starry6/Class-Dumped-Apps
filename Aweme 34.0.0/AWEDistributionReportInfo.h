@interface AWEDistributionReportInfo : MTLModel
@property (nonatomic) Q bizType;
@property (nonatomic) Q funcType;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (unsigned long long)bizType;
- (void)setBizType:;
- (unsigned long long)funcType;
- (void)setFuncType:;
- (id)extra;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
