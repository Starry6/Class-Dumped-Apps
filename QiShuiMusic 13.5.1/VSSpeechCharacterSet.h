@interface VSSpeechCharacterSet : NSObject
@property (nonatomic) NSCharacterSet characterSet;
- (id)characterSet;
- (id)initWithLanguage:;
- (void).cxx_destruct;
- (void)setCharacterSet:;
- (id)unspeakableRangeOfText:;
+ (id)languageMapping;
@end
