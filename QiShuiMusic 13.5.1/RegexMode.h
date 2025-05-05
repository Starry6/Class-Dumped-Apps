@interface RegexMode : NSObject
@property (nonatomic) NSString regex;
@property (nonatomic) NSString mode;
- (id)initWithRegex:mode:;
- (id)regex;
- (void)setRegex:;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:;
@end
