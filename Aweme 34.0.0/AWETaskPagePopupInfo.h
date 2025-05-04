@interface AWETaskPagePopupInfo : NSObject
@property (nonatomic) BOOL signInPopFirstShow;
@property (nonatomic) BOOL signInPopFirstClicked;
@property (nonatomic) BOOL signInPopExtraShow;
@property (nonatomic) BOOL signInPopExtraClicked;
@property (nonatomic) BOOL signInCellClicked;
@property (nonatomic) BOOL isClientAIShow;
- (BOOL)signInPopFirstShow;
- (void)setSignInPopFirstShow:;
- (BOOL)signInPopFirstClicked;
- (void)setSignInPopFirstClicked:;
- (BOOL)signInPopExtraShow;
- (void)setSignInPopExtraShow:;
- (BOOL)signInPopExtraClicked;
- (void)setSignInPopExtraClicked:;
- (BOOL)signInCellClicked;
- (void)setSignInCellClicked:;
- (BOOL)isClientAIShow;
- (void)setIsClientAIShow:;
+ (id)new;
@end
