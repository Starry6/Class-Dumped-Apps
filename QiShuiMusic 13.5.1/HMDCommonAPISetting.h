@interface HMDCommonAPISetting : NSObject
@property (nonatomic) NSArray hosts;
@property (nonatomic) BOOL enableEncrypt;
- (BOOL)enableEncrypt;
- (void)setEnableEncrypt:;
- (id)hosts;
- (void).cxx_destruct;
- (void)setHosts:;
+ (id)hmd_attributeMapDictionary;
@end
