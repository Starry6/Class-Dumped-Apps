@interface VEFeatureHandleParameters : NSObject
@property (nonatomic) NSString resPath;
@property (nonatomic) NSString identifier;
@property (nonatomic) VEColorSpaceInfo colorSpaceInfo;
@property (nonatomic) Q featureType;
- (id)resPath;
- (id)colorSpaceInfo;
- (void)setColorSpaceInfo:;
- (void)setResPath:;
- (unsigned long long)featureType;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (void)setFeatureType:;
@end
