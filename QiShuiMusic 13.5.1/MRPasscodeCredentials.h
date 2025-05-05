@interface MRPasscodeCredentials : NSObject
@property (nonatomic) I type;
@property (nonatomic) Q characterCount;
@property (nonatomic) NSString passcode;
- (unsigned long long)characterCount;
- (id)passcode;
- (void)setType:;
- (unsigned int)type;
- (void).cxx_destruct;
- (void)setPasscode:;
- (void)setCharacterCount:;
+ (id)standardCredentials;
@end
