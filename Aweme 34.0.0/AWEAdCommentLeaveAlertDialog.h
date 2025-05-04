@interface AWEAdCommentLeaveAlertDialog : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackWithAweme:label:refer:;
+ (void)showAlertWithAweme:actionBlock:cancelBlock:;
@end
