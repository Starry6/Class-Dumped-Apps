@interface AWEBrowseCommentPushGuideManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
+ (id)sharedInstance;
@end
