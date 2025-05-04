@interface AWERadarSpringActivityConfigModel : NSObject
@property (nonatomic) BOOL isSpringActive;
@property (nonatomic) BOOL isTextCommand;
@property (nonatomic) NSArray textCommandArray;
- (void)setTextCommandArray:;
- (void)setIsTextCommand:;
- (void)setIsSpringActive:;
- (BOOL)isSpringActive;
- (BOOL)isTextCommand;
- (id)attribtedTextForString:;
- (id)textCommandArray;
- (void).cxx_destruct;
@end
