@interface IESLiveInteractSubtitleForShow : NSObject
@property (nonatomic) NSString content;
@property (nonatomic) NSString userid;
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL definite;
@property (nonatomic) q line;
- (id)getCopy;
- (BOOL)definite;
- (void)setDefinite:;
- (id)content;
- (void)setContent:;
- (id)init;
- (void)setEmpty:;
- (BOOL)empty;
- (void).cxx_destruct;
- (void)reset;
- (long long)line;
- (id)copyWithZone:;
- (void)setLine:;
- (id)userid;
- (void)setUserid:;
@end
