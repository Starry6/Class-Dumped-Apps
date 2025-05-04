@interface AWEToolLogBridge : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)IESEditorlogToLocal:andLevel:;
+ (id)sharedInstance;
+ (void)build;
@end
