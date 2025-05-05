@interface SFEndSearchFeedback : SFFeedback
@property (nonatomic) NSString uuid;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) Q cancelSearchEvent;
- (BOOL)isCanceled;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setIsCanceled:;
- (void).cxx_destruct;
- (id)initWithStartSearch:;
- (unsigned long long)cancelSearchEvent;
- (void)setCancelSearchEvent:;
+ (BOOL)supportsSecureCoding;
@end
