@interface FMDGenericMessage : NSObject
@property (nonatomic) BOOL vibrate;
@property (nonatomic) NSString soundName;
@property (nonatomic) NSInteger soundDuration;
- (id)soundName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSoundName:;
- (void).cxx_destruct;
- (BOOL)vibrate;
- (int)soundDuration;
- (void)setVibrate:;
- (void)setSoundDuration:;
+ (BOOL)supportsSecureCoding;
@end
