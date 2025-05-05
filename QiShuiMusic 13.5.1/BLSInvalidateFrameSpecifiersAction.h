@interface BLSInvalidateFrameSpecifiersAction : BSAction
@property (nonatomic) NSString reason;
- (id)initWithReason:;
- (id)reason;
@end
