@interface BDARewardedVideoAlertInfo : NSObject
@property (nonatomic) NSString alertTitle;
@property (nonatomic) UIImage alertImage;
@property (nonatomic) NSString alertImageUrl;
- (id)alertImageUrl;
- (id)initWithTitle:alertImage:;
- (void)setAlertImage:;
- (void)setAlertImageUrl:;
- (id)init;
- (void)setAlertTitle:;
- (void).cxx_destruct;
- (id)alertTitle;
- (id)alertImage;
@end
