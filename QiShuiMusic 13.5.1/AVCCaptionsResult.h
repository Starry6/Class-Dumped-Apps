@interface AVCCaptionsResult : NSObject
@property (nonatomic) BOOL utteranceComplete;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSString text;
@property (nonatomic) I utteranceNumber;
@property (nonatomic) I updateNumber;
@property (nonatomic) NSArray segments;
- (id)segments;
- (void)dealloc;
- (id)description;
- (id)text;
- (id)tokens;
- (unsigned int)utteranceNumber;
- (BOOL)utteranceComplete;
- (unsigned int)updateNumber;
- (id)initWithCapacity:utteranceComplete:utteranceNumber:updateNumber:;
- (BOOL)addTokenWithString:confidence:range:;
@end
