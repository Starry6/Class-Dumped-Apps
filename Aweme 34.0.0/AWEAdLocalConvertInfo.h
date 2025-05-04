@interface AWEAdLocalConvertInfo : NSObject
@property (nonatomic) NSString adConvertAppID;
@property (nonatomic) NSString webURL;
@property (nonatomic) double feedBackDate;
- (id)adConvertAppID;
- (double)feedBackDate;
- (void)setAdConvertAppID:;
- (void)setFeedBackDate:;
- (void)encodeWithCoder:;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)webURL;
- (id)initWithCoder:;
@end
