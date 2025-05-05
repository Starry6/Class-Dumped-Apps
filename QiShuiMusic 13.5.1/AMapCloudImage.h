@interface AMapCloudImage : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString preurl;
@property (nonatomic) NSString url;
- (id)preurl;
- (void)setPreurl:;
- (id)url;
- (id)init;
- (id)uid;
- (void)setUid:;
- (void)setUrl:;
- (void).cxx_destruct;
+ (id)ajo_mapping;
@end
