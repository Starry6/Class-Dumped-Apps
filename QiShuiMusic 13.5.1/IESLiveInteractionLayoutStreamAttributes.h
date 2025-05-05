@interface IESLiveInteractionLayoutStreamAttributes : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} mainSlotStreamLayout;
@property (nonatomic) NSArray guestStreamLayoutFrames;
@property (nonatomic) NSArray allStreamLayoutFrames;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentStreamLayout;
- (id)allStreamLayoutFrames;
- (id)contentStreamLayout;
- (id)guestStreamLayoutFrames;
- (id)mainSlotStreamLayout;
- (void)setAllStreamLayoutFrames:;
- (void)setContentStreamLayout:;
- (void)setGuestStreamLayoutFrames:;
- (void)setMainSlotStreamLayout:;
- (void).cxx_destruct;
@end
