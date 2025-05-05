@interface BDALokiConfiguration : NSObject
@property (nonatomic) NSDictionary accessKeyDics;
@property (nonatomic) NSDictionary customTrackData;
@property (nonatomic) BOOL removeInDwongrade;
@property (nonatomic) q widthMode;
@property (nonatomic) q heightMode;
@property (nonatomic) NSString commonAccessKey;
@property (nonatomic) NSArray extraJSPaths;
- (id)commonAccessKey;
- (id)customTrackData;
- (id)accessKeyDics;
- (id)extraJSPaths;
- (long long)heightMode;
- (BOOL)removeInDwongrade;
- (void)setAccessKeyDics:;
- (void)setCommonAccessKey:;
- (void)setCustomTrackData:;
- (void)setExtraJSPaths:;
- (void)setHeightMode:;
- (void)setRemoveInDwongrade:;
- (void)setWidthMode:;
- (long long)widthMode;
- (id)init;
- (void).cxx_destruct;
@end
