@interface HMAggregateParam : NSObject
@property (nonatomic) q fileSize;
@property (nonatomic) NSDictionary fileConfig;
@property (nonatomic) NSDictionary aggreIntoMax;
- (id)aggreIntoMax;
- (id)fileConfig;
- (void)setAggreIntoMax:;
- (void)setFileConfig:;
- (long long)fileSize;
- (void)setFileSize:;
- (void).cxx_destruct;
@end
