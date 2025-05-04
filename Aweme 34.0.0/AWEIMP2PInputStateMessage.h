@interface AWEIMP2PInputStateMessage : AWEIMP2PMessage
@property (nonatomic) q state;
- (id)initWithContentDict:;
- (long long)state;
- (void)setState:;
@end
