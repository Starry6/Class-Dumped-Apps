@interface MXCallStackThread : NSObject
@property (nonatomic) BOOL attributedThread;
@property (nonatomic) NSArray topFrames;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithTopCallStackFrames:isAttributedThread:;
- (BOOL)attributedThread;
- (id)topFrames;
+ (BOOL)supportsSecureCoding;
@end
