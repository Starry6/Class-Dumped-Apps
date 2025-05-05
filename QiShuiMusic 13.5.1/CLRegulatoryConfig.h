@interface CLRegulatoryConfig : NSObject
- (void).cxx_destruct;
- (BOOL)setExtendedBorderDetection:withExtendedDistance:;
- (void)fetchConfigForLocation:withReply:;
- (void)fetchInfoForLocation:withReply:;
- (id)initWithQueue:defaultConfig:;
- (BOOL)addConfigForIsoList:config:error:;
- (id).cxx_construct;
- (BOOL)addConfigForRegionList:config:error:;
@end
