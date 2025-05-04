@interface AWEFeedCommandReportUITree : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)excuteCommandWithParams:completion:;
- (void)setup;
+ (id)createInstance;
+ (id)cloudCommandIdentifier;
+ (void)uploadViewHierarchyWithRecordID:channel:;
+ (void)recordViewHierarchyForWindow:needDetail:;
+ (id)sharedInstance;
@end
