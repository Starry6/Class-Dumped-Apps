@interface DKDAAPParserContainer : NSObject
@property (nonatomic) I code;
@property (nonatomic) I length;
@property (nonatomic) I remaining;
- (unsigned int)code;
- (unsigned int)remaining;
- (void)setRemaining:;
- (unsigned int)length;
- (void)setLength:;
- (void)setCode:;
@end
