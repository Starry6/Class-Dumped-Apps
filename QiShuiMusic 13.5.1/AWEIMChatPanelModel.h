@interface AWEIMChatPanelModel : NSObject
@property (nonatomic) Q modelType;
@property (nonatomic) NSString labelText;
@property (nonatomic) UIImage buttonImage;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) UIImage tagImage;
@property (nonatomic) NSString tagText;
- (id)tagText;
- (void)setTagImage:;
- (void)setTagText:;
- (id)tagImage;
- (unsigned long long)modelType;
- (void)setModelType:;
- (id)buttonImage;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)labelText;
- (BOOL)isUnavailable;
- (void)setIsUnavailable:;
- (void)setButtonImage:;
@end
