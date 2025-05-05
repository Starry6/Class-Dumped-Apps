@interface IESMMLivePhotoConfig : NSObject
@property (nonatomic) double cacheTime;
@property (nonatomic) BOOL clearCacheAfterStop;
@property (nonatomic) NSString livephotoCachePath;
@property (nonatomic) double recordRate;
- (double)cacheTime;
- (BOOL)clearCacheAfterStop;
- (id)livephotoCachePath;
- (double)recordRate;
- (void)setCacheTime:;
- (void)setClearCacheAfterStop:;
- (void)setLivephotoCachePath:;
- (void)setRecordRate:;
- (id)init;
- (void).cxx_destruct;
@end
