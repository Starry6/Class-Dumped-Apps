@interface IESDPBShrinkNode : NSObject
@property (nonatomic) NSArray keepArray;
@property (nonatomic) NSDictionary subShrinks;
@property (nonatomic) NSString configString;
@property (nonatomic) q length;
@property (nonatomic) IESDPBShrinkNode mapValuesNode;
- (id)keepArray;
- (id)mapValuesNode;
- (void)setConfigString:;
- (void)setKeepArray:;
- (void)setMapValuesNode:;
- (void)setSubShrinks:;
- (id)subShrinks;
- (id)init;
- (void).cxx_destruct;
- (long long)length;
- (void)setLength:;
- (id)configString;
@end
