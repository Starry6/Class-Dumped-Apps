@interface AWENotifyExtraModel : ACCBaseApiModel
@property (nonatomic) NSString noteText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) Q alertType;
- (id)noteText;
- (void)setNoteText:;
- (unsigned long long)alertType;
- (void)setAlertType:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
