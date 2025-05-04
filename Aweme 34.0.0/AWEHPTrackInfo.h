@interface AWEHPTrackInfo : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary rawParams;
@property (nonatomic) AWEHPTrackInfoContext context;
- (id)rawParams;
- (id)initWithEvent:rawParams:;
- (void).cxx_destruct;
- (id)event;
- (id)context;
@end
