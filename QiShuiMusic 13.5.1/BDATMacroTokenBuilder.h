@interface BDATMacroTokenBuilder : NSObject
@property (nonatomic) NSString timestamp;
@property (nonatomic) NSString userAgent;
- (id)macroToken:;
- (id)userAgent;
- (void)setUserAgent:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
@end
