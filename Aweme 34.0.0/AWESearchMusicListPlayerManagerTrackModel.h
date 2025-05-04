@interface AWESearchMusicListPlayerManagerTrackModel : NSObject
@property (nonatomic) NSString page;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString queueName;
@property (nonatomic) NSDictionary trackParams;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)trackParams;
- (void)setTrackParams:;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:;
- (id)queueName;
- (void)setQueueName:;
@end
