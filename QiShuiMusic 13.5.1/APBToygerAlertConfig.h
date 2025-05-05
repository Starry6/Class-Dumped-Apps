@interface APBToygerAlertConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSString leftButtonText;
@property (nonatomic) NSString rightButtonText;
@property (nonatomic) q returnCode;
- (long long)returnCode;
- (void)setMessage:;
- (void)setTitle:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (void)setLeftButtonText:;
- (id)leftButtonText;
- (void)setRightButtonText:;
- (id)rightButtonText;
- (void)setReturnCode:;
@end
