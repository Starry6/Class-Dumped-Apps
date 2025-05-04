@interface AWEDetailURLModel : NSObject
@property (nonatomic) NSArray URLList;
@property (nonatomic) NSString URI;
- (id)URLList;
- (void)setURLList:;
- (id)initWithURI:URLList:;
- (id)initWithAWEURLModel:;
- (void)setURI:;
- (id)URI;
- (void).cxx_destruct;
@end
