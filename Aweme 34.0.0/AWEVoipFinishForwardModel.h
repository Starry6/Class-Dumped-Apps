@interface AWEVoipFinishForwardModel : NSObject
@property (nonatomic) q forwardType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSDictionary customInfo;
- (long long)forwardType;
- (id)initWithforwardType:title:scheme:;
- (id)scheme;
- (id)customInfo;
- (void).cxx_destruct;
- (id)title;
- (void)setCustomInfo:;
@end
