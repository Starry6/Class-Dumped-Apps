@interface CSInstantAnswer : NSObject
@property (nonatomic) NSMutableArray actions;
@property (nonatomic) CSDonatedEvent event;
- (void)addAction:;
- (void)setEvent:;
- (id)event;
- (void)setActions:;
- (id)initWithAttributes:;
- (id)attributes;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEvent:;
- (id)copyWithZone:;
+ (id)instantAnswersFromData:;
+ (id)dataFromInstantAnswers:;
@end
