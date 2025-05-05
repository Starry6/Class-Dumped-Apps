@interface AWEIMP2PInputStateMessage : AWEIMP2PMessage
@property (nonatomic) q state;
- (id)initWithContentDict:;
- (void)setState:;
- (long long)state;
@end
