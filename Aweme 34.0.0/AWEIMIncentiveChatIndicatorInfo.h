@interface AWEIMIncentiveChatIndicatorInfo : NSObject
@property (nonatomic) BOOL showStyle;
@property (nonatomic) BOOL coolDownStyle;
@property (nonatomic) BOOL activateStyle;
@property (nonatomic) BOOL suppressionStyle;
@property (nonatomic) NSDictionary dictionaryRawData;
- (BOOL)showStyle;
- (void)setShowStyle:;
- (BOOL)activateStyle;
- (id)dictionaryRawData;
- (BOOL)suppressionStyle;
- (BOOL)coolDownStyle;
- (void)setCoolDownStyle:;
- (void)setActivateStyle:;
- (void)setSuppressionStyle:;
- (void)setDictionaryRawData:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
