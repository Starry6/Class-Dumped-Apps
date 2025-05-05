@interface CXSetVideoPresentationSizeCallAction : CXCallAction
@property (nonatomic) {CGSize=dd} videoPresentationSize;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (id)sanitizedCopyWithZone:;
- (void)updateCopy:withZone:;
- (id)videoPresentationSize;
- (id)initWithCallUUID:videoPresentationSize:;
- (void)setVideoPresentationSize:;
+ (BOOL)supportsSecureCoding;
@end
