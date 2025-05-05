@interface DOCUISession : NSObject
+ (id)shared;
+ (id)keyWindow;
+ (id)defaultContentSizeCategory;
+ (void)performAfterCATransactionCommits:;
+ (id)anyWindowPreferingKeyWindow;
+ (id)windowWithRootViewController:;
@end
