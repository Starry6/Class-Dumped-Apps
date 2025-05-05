@interface YYTextRunDelegate : NSObject
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double width;
- (id)CTRunDelegate;
- (void)setAscent:;
- (void)setDescent:;
- (id)userInfo;
- (void)setWidth:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)width;
- (double)ascent;
- (void)setUserInfo:;
- (double)descent;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
