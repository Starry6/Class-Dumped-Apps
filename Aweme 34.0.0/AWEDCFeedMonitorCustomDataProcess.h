@interface AWEDCFeedMonitorCustomDataProcess : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)recordCurrentDurationWithEvent:;
- (void)finishWithExtra:;
- (id)initWithScene:event:queue:;
- (id)generalJsonStringWithDict:;
- (void)finishEvent;
- (void)beginEvent;
- (void).cxx_destruct;
@end
