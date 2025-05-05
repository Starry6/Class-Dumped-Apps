@interface IESMMQRCode : IESMMObject
@property (nonatomic) ^v handle;
- (void)createQRCode:completion:;
- (id)imageRefFromBGRABytes:imageSize:;
- (id)init;
- (void)dealloc;
- (id)handle;
- (void)setHandle:;
@end
