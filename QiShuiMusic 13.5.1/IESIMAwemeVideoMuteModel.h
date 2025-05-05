@interface IESIMAwemeVideoMuteModel : IESIMBaseApiModel
@property (nonatomic) BOOL isMute;
@property (nonatomic) NSString muteMessage;
- (void)setMuteMessage:;
- (id)muteMessage;
- (void)setIsMute:;
- (void).cxx_destruct;
- (BOOL)isMute;
+ (id)JSONKeyPathsByPropertyKey;
@end
