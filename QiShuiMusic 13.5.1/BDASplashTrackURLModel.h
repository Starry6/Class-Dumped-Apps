@interface BDASplashTrackURLModel : NSObject
@property (nonatomic) NSString adId;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString trackLabel;
@property (nonatomic) double expireTime;
- (id)initWithAdId:logExtra:trackLabel:expireTime:;
- (id)logExtra;
- (void)setLogExtra:;
- (void)setTrackLabel:;
- (void).cxx_destruct;
- (id)trackLabel;
- (double)expireTime;
- (id)adId;
- (void)setAdId:;
@end
