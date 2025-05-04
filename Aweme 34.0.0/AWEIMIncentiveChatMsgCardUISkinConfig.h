@interface AWEIMIncentiveChatMsgCardUISkinConfig : NSObject
@property (nonatomic) NSString backgroundImgURL;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString titleTextColorRGBAString;
@property (nonatomic) NSString subTitleTextColorRGBAString;
- (id)titleTextColorRGBAString;
- (id)backgroundImgURL;
- (id)subTitleTextColorRGBAString;
- (void)setBackgroundImgURL:;
- (void)setTitleTextColorRGBAString:;
- (void)setSubTitleTextColorRGBAString:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)initWithDict:;
@end
