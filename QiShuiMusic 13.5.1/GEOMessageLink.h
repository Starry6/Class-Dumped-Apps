@interface GEOMessageLink : NSObject
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString messageURLString;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) NSString navBackgroundColorString;
@property (nonatomic) NSString navTintColorString;
- (id)messageID;
- (void).cxx_destruct;
- (int)responseTime;
- (id)timeZone;
- (id)initWithMessageLink:;
- (id)messageURLString;
- (id)navBackgroundColorString;
- (id)navTintColorString;
- (BOOL)isVerified;
- (id)messageBusinessHours;
@end
