@interface AWEECOMIMSendPhotoModel : NSObject
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSString sourceLocalPath;
@property (nonatomic) q photoSource;
- (id)sourceLocalPath;
- (void)setSourceLocalPath:;
- (void)setPhotoSource:;
- (long long)photoSource;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (double)height;
@end
