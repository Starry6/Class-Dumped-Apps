@interface AWEIMSkylightDotInfoModel : NSObject
@property (nonatomic) Q dotPosition;
@property (nonatomic) NSString dotColor;
@property (nonatomic) NSString dotDarkColor;
@property (nonatomic) NSString dotUrl;
@property (nonatomic) NSString dotDarkUrl;
- (id)getContentDict;
- (unsigned long long)dotPosition;
- (void)setDotUrl:;
- (id)dotDarkColor;
- (id)dotUrl;
- (id)dotDarkUrl;
- (void)setDotPosition:;
- (void)setDotDarkColor:;
- (void)setDotDarkUrl:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (id)dotColor;
- (void)setDotColor:;
@end
