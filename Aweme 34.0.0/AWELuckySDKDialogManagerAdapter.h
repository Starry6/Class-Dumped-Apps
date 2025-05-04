@interface AWELuckySDKDialogManagerAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)extraServiceProtocols;
+ (BOOL)showDialog:withPriority:showDialog:forceHide:extra:;
+ (void)finishDialog:;
+ (void)finishMessage:;
+ (BOOL)showMessage:withPriority:showMessage:forceHide:extra:;
+ (BOOL)isFeedActivityShowing;
+ (id)popupsConverted;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
