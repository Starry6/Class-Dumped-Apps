@interface AWEPadDanmakuServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)padDanmakuStandardSpeed;
- (BOOL)shouldShowPadDanmakuEntry;
- (id)padDanmakuEntryView;
+ (id)sharedInstance;
@end
