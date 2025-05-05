@interface SAMICore_StyleConversionHttpResponsePayload : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString vid;
@property (nonatomic) NSMutableArray warpingMapIn;
@property (nonatomic) NSMutableArray warpingMapOut;
- (void)setVid:;
- (id)vid;
- (void)setWarpingMapIn:;
- (void)setWarpingMapOut:;
- (id)warpingMapIn;
- (id)warpingMapOut;
- (id)url;
- (void)dealloc;
- (void)setUrl:;
@end
