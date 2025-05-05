@interface HMDDoubleUploadSettings : NSObject
@property (nonatomic) BOOL enableOpen;
@property (nonatomic) NSArray hostAndPath;
@property (nonatomic) NSArray allowList;
- (void)setHostAndPath:;
- (BOOL)enableOpen;
- (id)hostAndPath;
- (void)setEnableOpen:;
- (void).cxx_destruct;
- (void)setAllowList:;
- (id)allowList;
+ (id)hmd_attributeMapDictionary;
@end
