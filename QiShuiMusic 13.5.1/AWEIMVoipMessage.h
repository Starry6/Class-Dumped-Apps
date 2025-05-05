@interface AWEIMVoipMessage : AWEIMMessage
@property (nonatomic) Q voipStatus;
@property (nonatomic) NSString voipContent;
@property (nonatomic) q cameraOff;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) Q cellStyle;
- (void)setVoipContent:;
- (id)calculateAttributedContent;
- (long long)cameraOff;
- (id)getContentDict;
- (id)initWithContentDict:;
- (BOOL)p_isEnhancedCellStyleByABTest;
- (void)setCameraOff:;
- (void)setVoipStatus:;
- (id)voipContent;
- (id)voipIcon:;
- (unsigned long long)voipStatus;
- (unsigned long long)cellStyle;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)copyWithZone:;
- (id)mainTitle;
- (void)setMainTitle:;
+ (id)contentAttributes;
@end
