@interface MRSetHiliteModeMessage : MRProtocolMessage
@property (nonatomic) BOOL hiliteMode;
- (unsigned long long)type;
- (id)initWithHiliteMode:;
- (BOOL)hiliteMode;
@end
