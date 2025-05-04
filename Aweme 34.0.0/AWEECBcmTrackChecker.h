@interface AWEECBcmTrackChecker : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray bstGroupTypeCheckEvents;
@property (nonatomic) NSArray bstFormInfoCheckEvents;
@property (nonatomic) NSArray btmCheckEvents;
- (void)setBstGroupTypeCheckEvents:;
- (void)setBstFormInfoCheckEvents:;
- (void)setBtmCheckEvents:;
- (void)checkBtmWithEvent:params:;
- (id)btmCheckEvents;
- (void)checkEvent:params:;
- (id)bstGroupTypeCheckEvents;
- (id)bstFormInfoCheckEvents;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)shared;
@end
