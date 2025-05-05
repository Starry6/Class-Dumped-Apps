@interface AWEIMHalfScreenGroupDescEditViewController : AWEIMGroupDescEditViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)minViewHeightForHalfScreen;
- (void)updateTemplateViewLayoutWithKeboardShow:userInfo:;
- (void)viewDidLoad;
@end
