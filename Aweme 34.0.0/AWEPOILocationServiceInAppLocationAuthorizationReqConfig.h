@interface AWEPOILocationServiceInAppLocationAuthorizationReqConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString actionText;
@property (nonatomic) NSString cancelText;
- (id)cancelText;
- (void)setCancelText:;
- (id)initWithTitle:subtitle:actionText:cancelText:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)actionText;
- (void)setActionText:;
@end
