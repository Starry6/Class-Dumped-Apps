@interface AWESearchCustomeEditorConfig : NSObject
@property (nonatomic) NSString videoPath;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString shootWay;
@property (nonatomic) NSString shootEnterFrom;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) NSDictionary trackParams;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setShootWay:;
- (void)setShootEnterFrom:;
- (id)shootWay;
- (id)shootEnterFrom;
- (void).cxx_destruct;
- (void)setVideoPath:;
- (id)videoPath;
- (id)requestParams;
- (void)setRequestParams:;
@end
