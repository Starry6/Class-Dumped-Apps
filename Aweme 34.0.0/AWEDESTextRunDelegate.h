@interface AWEDESTextRunDelegate : NSObject
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double width;
- (void)setAscent:;
- (void)setDescent:;
- (id)CTRunDelegate;
- (void)setWidth:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (id)userInfo;
- (double)width;
- (void).cxx_destruct;
- (double)descent;
- (double)ascent;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
