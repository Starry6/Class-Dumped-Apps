@interface IESLiveInteractFanTicketModel : NSObject
@property (nonatomic) NSInteger level;
@property (nonatomic) NSString score;
@property (nonatomic) IESLiveInteractUserFanticketStatus status;
@property (nonatomic) NSNumber style_type;
@property (nonatomic) NSNumber hidden;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor animateBgColor;
@property (nonatomic) NSString iconUrl;
- (id)iconUrl;
- (id)animateBgColor;
- (void)setAnimateBgColor:;
- (void)setIconUrl:;
- (void)setStyle_type:;
- (id)style_type;
- (void)setLevel:;
- (void)setStatus:;
- (void)setBackgroundColor:;
- (id)score;
- (int)level;
- (id)backgroundColor;
- (id)hidden;
- (void)merge:;
- (void)setScore:;
- (void).cxx_destruct;
- (void)setHidden:;
- (id)status;
+ (id)modelWithLevel:score:quickInteract:flashAnimation:;
@end
