@interface AWEDeliveryImageMsgModel : AWEDeliveryBaseMsgModel
@property (nonatomic) AWEDeliveryImageItemModel imageItemModel;
- (id)imageItemModel;
- (id)getImageCacheFromLocalPath:;
- (void)setImageItemModel:;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (Class)cellClass;
@end
