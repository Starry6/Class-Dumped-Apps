@interface HMDNetTrafficNetTypeUsageModel : NSObject
@property (nonatomic) NSMutableArray bizUsage;
@property (nonatomic) NSString netTypeName;
@property (nonatomic) Q netType;
@property (nonatomic) q totalUsage;
- (void)setNetTypeName:;
- (id)bizUsage;
- (id)netTypeName;
- (void)setBizUsage:;
- (void)setNetType:;
- (void).cxx_destruct;
- (unsigned long long)netType;
- (long long)totalUsage;
- (void)setTotalUsage:;
+ (id)newModelWithNetType:;
@end
