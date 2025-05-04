@interface AWEECOMIMImageMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) AWEECOMIMImageItemModel imageItemModel;
- (id)imageItemModel;
- (id)getImageCacheFromLocalPath:;
- (void)setImageItemModel:;
- (BOOL)canShowFootDescSource;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (Class)cellClass;
@end
