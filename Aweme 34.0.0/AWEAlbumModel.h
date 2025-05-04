@interface AWEAlbumModel : NSObject
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) PHFetchResult result;
@property (nonatomic) NSString name;
@property (nonatomic) q count;
@property (nonatomic) BOOL isCameraRoll;
@property (nonatomic) NSDate lastUpdateDate;
@property (nonatomic) NSArray models;
- (void)setIsCameraRoll:;
- (id)lastUpdateDate;
- (void)setResult:;
- (void)setCount:;
- (long long)count;
- (void)setModels:;
- (id)localIdentifier;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)models;
- (void)setLastUpdateDate:;
- (id)result;
- (BOOL)isCameraRoll;
- (void)setLocalIdentifier:;
@end
