@interface AWEIMAIMixPhotoCheckModel : NSObject
@property (nonatomic) NSDictionary infoMap;
@property (nonatomic) NSArray resultDictArray;
- (id)infoMap;
- (void)setInfoMap:;
- (id)initWithInfoModel:;
- (id)getAlgorithmResultFromTypeDefine:;
- (id)resultDictArray;
- (BOOL)isValidResult;
- (void)setResultDictArray:;
- (float)limit;
- (BOOL)valid;
- (long long)faceCount;
- (float)occlusion;
- (void).cxx_destruct;
@end
